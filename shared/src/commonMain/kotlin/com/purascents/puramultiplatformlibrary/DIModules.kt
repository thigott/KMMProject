@file:Suppress("unused")

package com.purascents.puramultiplatformlibrary

import com.purascents.base.analytics.getSegmentAnalytics
import org.koin.dsl.module

val libraryModule = module {
    single { getSegmentAnalytics() }
}