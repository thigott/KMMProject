@file:Suppress("unused")

package com.purascents.puramultiplatformlibrary

import com.purascents.base.analytics.SegmentAnalytics
import com.purascents.base.analytics.getSegmentAnalytics

object PuraMultiplatformLibrary {

    val analytics: SegmentAnalytics = getSegmentAnalytics()
}