package com.purascents.base.analytics


class IOSSegmentAnalytics: SegmentAnalytics {

    private var logEventAction: ((AnalyticsEvent) -> Unit)? = null

    private var logScreenAction: ((ScreenEvent) -> Unit)? = null

    override fun configure(key: String) {
        return
    }

    override fun configure(
        eventAction: (AnalyticsEvent) -> Unit,
        screenAction: (ScreenEvent) -> Unit
    ) {
        logEventAction = eventAction
        logScreenAction = screenAction
    }

    override fun isConfigured(): Boolean {
        return logEventAction != null && logScreenAction != null
    }

    override fun setUserData(userId: String, properties: Map<Any?, *>) {
        return
    }

    override fun resetUserData() {
        return
    }

    override fun logEvent(event: AnalyticsEvent) {
        logEventAction?.invoke(event)
    }

    override fun logScreen(screen: ScreenEvent) {
        logScreenAction?.invoke(screen)
    }
}

actual fun getSegmentAnalytics(): SegmentAnalytics = IOSSegmentAnalytics()