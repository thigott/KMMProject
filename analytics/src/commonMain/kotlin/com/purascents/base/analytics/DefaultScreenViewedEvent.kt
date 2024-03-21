package com.purascents.base.analytics

import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CUSTOM_PROPERTIES_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FLOW_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SCREEN_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SCREEN_VIEWED_KEY
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put

/**
 *
 * # Viewed Screen Event Class
 *
 * @param screenName Name of the screen that will be tracked
 * @param flow Flow identifier @see com.purascents.base.analytics.AnalyticsAppFlow
 * @param customProperties Map of event's unique properties
 *
 */

open class DefaultScreenViewedEvent(
    override val screenName: String,
    private val flow: String = "",
    private val customProperties: Map<String, Any>? = mapOf()
) : ScreenEvent() {

    override fun parameters(): JsonObject = buildJsonObject {
        put(SCREEN_NAME_KEY, screenName)
        put(FLOW_KEY, flow)
        put(CUSTOM_PROPERTIES_KEY, customProperties?.toJsonElement() ?: emptyJsonObject)
    }

    override fun parametersAsMap(): Map<String, Any?> {
        return mapOf(
            SCREEN_NAME_KEY to screenName,
            FLOW_KEY to flow,
            CUSTOM_PROPERTIES_KEY to customProperties.orEmpty()
        )
    }

    companion object {
        const val KEY = SCREEN_VIEWED_KEY
    }
}
