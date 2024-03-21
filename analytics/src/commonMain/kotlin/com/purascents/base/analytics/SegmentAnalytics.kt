package com.purascents.base.analytics

interface SegmentAnalytics {

    fun configure(key: String)

    fun configure(
        eventAction: (AnalyticsEvent) -> Unit,
        screenAction: (ScreenEvent) -> Unit
    )

    fun isConfigured(): Boolean

    fun setUserData(userId: String, properties: Map<Any?, *>)

    fun resetUserData()

    fun logEvent(event: AnalyticsEvent)

    fun logScreen(screen: ScreenEvent)
}

expect fun getSegmentAnalytics(): SegmentAnalytics