package com.purascents.base.analytics

import android.content.Context
import com.segment.analytics.kotlin.android.Analytics
import com.segment.analytics.kotlin.core.Analytics
import com.segment.analytics.kotlin.core.emptyJsonObject
import org.koin.core.component.KoinComponent
import org.koin.core.component.inject

class AndroidSegmentAnalytics: SegmentAnalytics, KoinComponent {

    private val context: Context by inject()

    private lateinit var analytics: Analytics

    override fun configure(key: String) {
        analytics = Analytics(
            writeKey = key,
            context = context
        ) {
            trackApplicationLifecycleEvents = true
            application = context
            flushAt = 5
        }
    }

    override fun configure(
        eventAction: (AnalyticsEvent) -> Unit,
        screenAction: (ScreenEvent) -> Unit
    ) {
        return
    }

    override fun isConfigured(): Boolean {
        if (::analytics.isInitialized.not()) {
            return false
        }

        return analytics.configuration.writeKey.isNotEmpty()
    }

    override fun setUserData(userId: String, properties: Map<Any?, *>) {
        analytics.identify(userId, properties)
    }

    override fun resetUserData() {
        analytics.reset()
    }

    override fun logEvent(event: AnalyticsEvent) {
        if (::analytics.isInitialized.not()) {
            return
        }

        analytics.track(event.key, event.parameters() ?: emptyJsonObject)
    }

    override fun logScreen(screen: ScreenEvent) {
        if (::analytics.isInitialized.not()) {
            return
        }

        analytics.screen(DefaultScreenViewedEvent.KEY, screen.parameters() ?: emptyJsonObject, String.EMPTY)
    }
}

actual fun getSegmentAnalytics(): SegmentAnalytics = AndroidSegmentAnalytics()