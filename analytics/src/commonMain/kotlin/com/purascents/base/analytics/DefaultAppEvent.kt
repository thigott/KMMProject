package com.purascents.base.analytics

import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.APP_EVENT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CUSTOM_PROPERTIES_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DIFFUSER_ID_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.EVENT_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.EVENT_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FLOW_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SCREEN_NAME_KEY
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put

/**
 *
 * # App Event Class
 *
 * @param eventName Name of the event that will be tracked
 * @param diffuserId Diffuser identifier
 * @param flow Flow identifier @see com.purascents.base.analytics.AnalyticsAppFlow
 * @param eventType Who caused the event (User, App, Device)
 * @param screenName Name of the screen that will be tracked
 * @param customProperties Map of event's unique properties
 *
 */

open class DefaultAppEvent(
    private val eventName: String,
    private val diffuserId: String?,
    private val flow: String = "",
    private val eventType: String = EventType.USER.type,
    private val screenName: String? = null,
    val customProperties: Map<String, Any>? = mapOf()
) : AnalyticsEvent() {

    override val key: String = APP_EVENT_KEY

    override fun parameters(): JsonObject? = buildJsonObject {
        val customPropertiesValue = if (diffuserId.isNullOrEmpty().not()) {
            customProperties?.plus(Pair(DIFFUSER_ID_KEY, diffuserId))
        } else {
            customProperties
        }

        put(EVENT_NAME_KEY, eventName)
        put(FLOW_KEY, flow)
        put(EVENT_TYPE_KEY, eventType)
        put(SCREEN_NAME_KEY, screenName.orEmpty())
        put(CUSTOM_PROPERTIES_KEY, customPropertiesValue?.toJsonElement() ?: emptyJsonObject)
    }

    override fun parametersAsMap(): Map<String, Any?> {
        val customPropertiesValue = if (diffuserId.isNullOrEmpty().not()) {
            customProperties?.plus(Pair(DIFFUSER_ID_KEY, diffuserId))
        } else {
            customProperties
        }

        return mapOf(
            EVENT_NAME_KEY to eventName,
            FLOW_KEY to flow,
            EVENT_TYPE_KEY to eventType,
            SCREEN_NAME_KEY to screenName.orEmpty(),
            CUSTOM_PROPERTIES_KEY to customPropertiesValue.orEmpty()
        )
    }
}
