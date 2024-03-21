package com.purascents.base.analytics

import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BUTTON_TAPPED_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BUTTON_TEXT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CUSTOM_PROPERTIES_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.EVENT_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FLOW_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SCREEN_NAME_KEY
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put
import org.koin.core.component.KoinComponent

/**
 *
 * # Button Tapped Event Class
 *
 * @param screenName Name of the screen that will be tracked
 * @param buttonText Text of pressed button
 * @param flow Flow identifier @see com.purascents.base.analytics.AnalyticsAppFlow
 * @param eventType Who caused the event (User, App, Device)
 * @param customProperties Map of event's unique properties
 *
 */

open class DefaultButtonTappedEvent(
    private val screenName: String,
    private val buttonText: String = "",
    private val flow: String = "",
    private val eventType: String = EventType.USER.type,
    val customProperties: Map<String, Any>? = mapOf()
) : AnalyticsEvent(), KoinComponent {

    override val key: String = BUTTON_TAPPED_KEY

    override fun parameters(): JsonObject = defaultButtonTappedParameters()

    private fun defaultButtonTappedParameters(): JsonObject = buildJsonObject {
        put(SCREEN_NAME_KEY, screenName)
        put(BUTTON_TEXT_KEY, buttonText)
        put(FLOW_KEY, flow)
        put(EVENT_TYPE_KEY, eventType)
        put(CUSTOM_PROPERTIES_KEY, customProperties?.toJsonElement() ?: emptyJsonObject)
    }

    override fun parametersAsMap(): Map<String, Any?> {
        return mapOf(
            SCREEN_NAME_KEY to screenName,
            BUTTON_TEXT_KEY to buttonText,
            FLOW_KEY to flow,
            EVENT_TYPE_KEY to eventType,
            CUSTOM_PROPERTIES_KEY to customProperties.orEmpty()
        )
    }
}
