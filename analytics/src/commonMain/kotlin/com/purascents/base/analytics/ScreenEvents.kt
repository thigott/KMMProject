@file:Suppress("unused")

package com.purascents.base.analytics

import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BAY_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DEVICE_ID_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FRAGRANCE_REMAINING_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FRAGRANCE_SKU_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FRAGRANCE_TIMESTAMP_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.INTENSITY_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.IS_RUNNING_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.PAGE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ROOM_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SKU_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.VARIANT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.WEARING_TIME_KEY
import kotlinx.serialization.json.JsonObject

abstract class ScreenEvent {
    abstract val screenName: String
    abstract fun parameters(): JsonObject?

    abstract fun parametersAsMap(): Map<String, Any?>

    override fun toString(): String {
        return "screen name: $screenName params: ${parameters()?.toString()}"
    }
}

class LogInHomeScreenEvent : DefaultScreenViewedEvent(
    screenName = "Login Home Screen"
)

class ShopAsGuestScreenEvent : DefaultScreenViewedEvent(
    screenName = "Shop As Guest Screen"
)

class DataOptOutScreen : DefaultScreenViewedEvent(
    screenName = "Data Opt Out Screen"
)

class SignUpScreenEvent : DefaultScreenViewedEvent(
    screenName = "Sign Up Screen"
)

class TermsAndConditionsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Terms And Conditions Screen"
)

class VerifyEmailScreenEvent : DefaultScreenViewedEvent(
    screenName = "Verify Email Screen"
)

class SignInScreenEvent : DefaultScreenViewedEvent(
    screenName = "Sign In Screen"
)

class ResetPasswordEmailScreenEvent : DefaultScreenViewedEvent(
    screenName = "Reset Password - Email Screen"
)

class ResetPasswordInstructionsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Reset Password - Instructions Screen"
)

class ResetPasswordNewPasswordScreenEvent : DefaultScreenViewedEvent(
    screenName = "Reset Password - New Password Screen"
)

class DiffusersScreenEvent : DefaultScreenViewedEvent(
    screenName = "Diffusers Screen",
    customProperties = mapOf(
        "multiplatform" to true
    )
)

class DiffuserSetupVideoScreenEvent : DefaultScreenViewedEvent(
    screenName = "Diffuser Setup Video Screen"
)

class ShopScreenEvent : DefaultScreenViewedEvent(
    screenName = "Shop Screen"
)

class DeliveriesScreenEvent : DefaultScreenViewedEvent(
    screenName = "Deliveries Screen"
)

class NotificationCenterScreenEvent : DefaultScreenViewedEvent(
    screenName = "Notification Center Screen"
)

class SettingsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Settings Screen"
)

class AppRatingScreenEvent : DefaultScreenViewedEvent(
    screenName = "App Rating Screen"
)

class AccountScreenEvent : DefaultScreenViewedEvent(
    screenName = "Account Screen"
)

class ContactUsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Contact Us Screen"
)

class TermsOfServiceScreenEvent : DefaultScreenViewedEvent(
    screenName = "Terms Of Service Screen"
)

class HelpCenterScreenEvent : DefaultScreenViewedEvent(
    screenName = "Help Center Screen"
)

class TutorialControlScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Control Screen"
)

class TutorialFragrancesScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Fragrances Screen"
)

class TutorialLightScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Light Screen"
)

class TutorialIntensityScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Intensity Screen"
)

class TutorialSchedulesScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Schedules Screen"
)

class TutorialMarketplaceScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Marketplace Screen"
)

class TutorialIngredientsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Ingredients Screen"
)

class TutorialSubscriptionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Tutorial - Subscription Screen"
)

class ReferAFriendReferralsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Refer A Friend - Referrals Screen"
)

class ReferAFriendPastReferralsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Refer A Friend - Past Referrals Screen"
)

class PermissionsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Permissions Screen"
)

abstract class DiffuserSetupScreenEvent(
    screenName: String,
    flow: AnalyticsAppFlow,
    val diffuserSetupVersion: DiffuserSetupVersion
) : DefaultScreenViewedEvent(
    screenName = screenName,
    flow = flow.value,
    customProperties = mapOf(
        VARIANT_KEY to diffuserSetupVersion.serializedName
    )
)

abstract class CarouselPageScreenEvent(
    screenName: String,
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion,
    open val page: LearnMoreCarouselPageName
) : DefaultScreenViewedEvent(
    screenName = screenName,
    flow = flow.value,
    customProperties = mapOf(
        VARIANT_KEY to diffuserSetupVersion.serializedName,
        PAGE_KEY to page.serializedName
    )
)

class DiffuserPositionScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Position Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class BlueNightlightScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Blue Nightlight Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ResetButtonScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Reset Button Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectToPuraScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Pura Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ScanningForDiffusersScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Scanning for Diffusers",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class Pura3DetectedModalScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Pura 3 Detected Modal",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectToPuraSetupTipsScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Pura - More Info Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class NoDiffusersFoundScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Pura - No Diffuser Found Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class UnableToConnectToDiffuserScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Pura - Unable to Connect to Diffuser Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectDiffuserSetupDeviceIssueScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Pura - Setup Device Issue Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectingToDiffuserScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connecting To Diffuser Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserReadyScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Ready Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectToWiFiScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Wi-Fi Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectToWiFiSetupTipsScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Wi-Fi - Setup Tips Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class NoWifiFoundScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Wi-Fi - No WiFi Found Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class ConnectToWiFiAutomaticallyScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Connect To Wi-Fi Automatically Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class EnterWiFiCredentialsPasswordEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Enter Wi-Fi Credentials - Password",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class LeaveDiffuserSetupScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Leave Diffuser Setup Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class OnboardingResultScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Onboarding Result Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserUpdatingScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Updating Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserUpdatingMoreInfoScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Updating - More Info Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class SmartVialsEducationScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Smart Vials Education Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class LegacyVialsEducationScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Legacy Vials Education Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class LearnMoreCarouselScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion,
    override val page: LearnMoreCarouselPageName,
) : CarouselPageScreenEvent(
    screenName = "Learn More Carousel Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion,
    page = page
)

class CreateScentScheduleScreenEvent(
    val flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Create A Scent Schedule Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserSetupCompleteScreenEvent(
    val flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Setup Complete Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserSetupTipsScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Setup Tips Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserSetupWebScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Setup Web Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserSetupMainScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Setup Main Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserSetupErrorScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Setup Error Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserListScreenEvent(
    flow: AnalyticsAppFlow,
) : DefaultScreenViewedEvent(
    screenName = "Diffuser List Screen",
    flow = flow.value
)

class DiffuserPositionMoreInfoScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Position - More Info Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserLocationScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Location Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class SetRoomNameScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Set Room Name Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class SetRoomNameMoreInfoScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Set Room Name - More Info Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class SelectRoomNameScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Select Room Name Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class WiFiSetupTipsScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Wi-Fi Setup Tips Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class FragranceSetupScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Fragrance Setup Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class FragranceSetupSearchFragranceEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Fragrance Setup - Search Fragrance Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class FragranceSetupScanQRCodeScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Fragrance Setup - Scan QR Code Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class EnterWiFiCredentialsPasswordScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Enter Wi-Fi Credentials - Password Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class EnterWiFiCredentialsManualScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Enter Wi-Fi Credentials - Manual Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class WiFiSetupTipsWebScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Wi-Fi Setup Tips Web Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationRestartWiFiSetupScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Restart WiFi Setup Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationUnableToConnectToWiFiScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Unable To Connect To Wi-Fi Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationThisIsNotWorkingOutScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - This Is Not Working Out Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationSomethingWentWrongScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Something Went Wrong Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationConnectionIssueScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Diffuser Connection Issue Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationWrongNetworkPasswordScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Wrong Network Password Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserConfigurationNetworkConnectionIssueScreenEvent(
    flow: AnalyticsAppFlow,
    diffuserSetupVersion: DiffuserSetupVersion
) : DiffuserSetupScreenEvent(
    screenName = "Diffuser Configuration - Network Connection Issue Screen",
    flow = flow,
    diffuserSetupVersion = diffuserSetupVersion
)

class DiffuserControlScreenEvent(
    deviceId: String,
    roomName: String,
    bay: Int,
    intensity: Int,
    fragranceSKU: String,
    fragranceAddedTimestamp: Long,
    wearingTime: Long,
    isRunning: Boolean,
) : DefaultScreenViewedEvent(
    screenName = "Diffuser Control Screen",
    customProperties = mapOf(
        DEVICE_ID_KEY to deviceId,
        ROOM_NAME_KEY to roomName,
        BAY_KEY to bay,
        INTENSITY_KEY to intensity,
        FRAGRANCE_SKU_KEY to fragranceSKU,
        FRAGRANCE_TIMESTAMP_KEY to fragranceAddedTimestamp,
        WEARING_TIME_KEY to wearingTime,
        IS_RUNNING_KEY to isRunning
    )
)

class TimerScreenEvent : DefaultScreenViewedEvent(
    screenName = "Timer Screen"
)

abstract class FragranceScreenEvent(
    screenName: String,
    fragranceRuntime: FragranceRuntimeVariant
) : DefaultScreenViewedEvent(
    screenName = screenName,
    customProperties = mapOf(
        VARIANT_KEY to fragranceRuntime.runtime
    )
)

class FragranceRuntimeScreenEvent(
    fragranceRuntime: FragranceRuntimeVariant
) : FragranceScreenEvent(
    screenName = "Fragrance Runtime Screen",
    fragranceRuntime = fragranceRuntime
)

class NoFragranceSmellAcknowledgementScreenEvent(
    fragranceRuntime: FragranceRuntimeVariant
) : FragranceScreenEvent(
    screenName = "No Fragrance Smell Acknowledgement Screen",
    fragranceRuntime = fragranceRuntime
)

class FragranceDescriptionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Fragrance Description Screen"
)

class NightlightSettingsScreenEvent : DefaultScreenViewedEvent(
    screenName = "Nightlight Settings Screen"
)

class DiffuserSettingsMainScreenEvent : DefaultScreenViewedEvent(
    screenName = "Diffuser Settings - Main Screen"
)

class DiffuserSettingsMoreScreenEvent : DefaultScreenViewedEvent(
    screenName = "Diffuser Settings - More Screen"
)

abstract class DiffuserSettingsScreenEvent(
    screenName: String,
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DefaultScreenViewedEvent(
    screenName = screenName,
    flow = flow.value,
    customProperties = mapOf(
        VARIANT_KEY to variant.serializedName
    )
)

class DiffuserOverviewScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Diffuser Overview Screen",
    flow = flow,
    variant = variant
)

class SelectTimeZoneScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Select Time Zone Screen",
    flow = flow,
    variant = variant
)

class EnterRoomNameScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Enter Room Name Screen",
    flow = flow,
    variant = variant
)

class FragranceSetupRemoveVialScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Fragrance Setup - Remove Vial Screen",
    flow = flow,
    variant = variant
)

class FragranceSetupMainScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Fragrance Setup - Main Screen",
    flow = flow,
    variant = variant
)

class FragranceSetupInsertVialScreenEvent(
    flow: AnalyticsAppFlow,
    variant: DiffuserSetupVersion
) : DiffuserSettingsScreenEvent(
    screenName = "Fragrance Setup - Insert Vial Screen",
    flow = flow,
    variant = variant
)

class AmbientModeScreenEvent : DefaultScreenViewedEvent(
    screenName = "Ambient Mode Screen"
)

class AwayModeScreenEvent : DefaultScreenViewedEvent(
    screenName = "Away Mode Screen"
)

class ChangeWiFiScreenEvent(
    diffuserSetupVersion: DiffuserSetupVersion
) : DefaultScreenViewedEvent(
    screenName = "Change Wi-Fi Screen",
    customProperties = mapOf(
        VARIANT_KEY to diffuserSetupVersion.serializedName
    )
)

class FixMyDiffuserScreenEvent(
    diffuserSetupVersion: DiffuserSetupVersion
) : DefaultScreenViewedEvent(
    screenName = "Fix My Diffuser Screen",
    customProperties = mapOf(
        VARIANT_KEY to diffuserSetupVersion.serializedName
    )
)

class FactoryResetDiffuserScreenEvent(
    diffuserSetupVersion: DiffuserSetupVersion
) : DefaultScreenViewedEvent(
    screenName = "Factory Reset Diffuser Screen",
    customProperties = mapOf(
        VARIANT_KEY to diffuserSetupVersion.serializedName
    )
)

class DiffuserInfoScreenEvent : DefaultScreenViewedEvent(
    screenName = "Diffuser Info Screen"
)

abstract class ScheduleScreenEvent(
    flow: AnalyticsAppFlow,
    screenName: String,
    scheduleVariant: ScheduleVariantEvent
) : DefaultScreenViewedEvent(
    screenName = screenName,
    flow = flow.value,
    customProperties = mapOf(
        VARIANT_KEY to scheduleVariant.variant
    )
)

class TrySchedulesScreenEvent(
    scheduleVariant: ScheduleVariantEvent
) : DefaultScreenViewedEvent(
    screenName = "Try Schedules Screen",
    customProperties = mapOf(
        VARIANT_KEY to scheduleVariant.variant
    )
)

class SchedulesCalendarScreenEvent(
    flow: AnalyticsAppFlow,
    scheduleVariant: ScheduleVariantEvent
) : ScheduleScreenEvent(
    screenName = "Schedules - Calendar Screen",
    scheduleVariant = scheduleVariant,
    flow = flow
)

class SchedulesListScreenEvent(
    flow: AnalyticsAppFlow,
    scheduleVariant: ScheduleVariantEvent
) : ScheduleScreenEvent(
    screenName = "Schedules - List Screen",
    scheduleVariant = scheduleVariant,
    flow = flow
)

class ScheduleSetupNewScreenEvent(
    flow: AnalyticsAppFlow,
    scheduleVariant: ScheduleVariantEvent
) : ScheduleScreenEvent(
    screenName = "Schedule Setup - New Screen",
    scheduleVariant = scheduleVariant,
    flow = flow
)

class QuickSchedulesScreenEvent(
    flow: AnalyticsAppFlow,
    scheduleVariant: ScheduleVariantEvent
) : ScheduleScreenEvent(
    screenName = "Quick Schedules Screen",
    scheduleVariant = scheduleVariant,
    flow = flow
)

class ScheduleSetupEditScreenEvent(
    flow: AnalyticsAppFlow,
    scheduleVariant: ScheduleVariantEvent
) : ScheduleScreenEvent(
    screenName = "Schedule Setup - Edit Screen",
    scheduleVariant = scheduleVariant,
    flow = flow
)

class CameraPermissionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Camera Permission Screen"
)

class LocationPermissionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Location Permission Screen"
)

class NotificationPermissionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Notification Permission Screen"
)

class NearbyDiffusersPermissionScreenEvent : DefaultScreenViewedEvent(
    screenName = "Nearby Diffusers Permission Screen"
)

class AlexaSkillLoadingScreenEvent : DefaultScreenViewedEvent(
    screenName = "Alexa Skill - Loading Screen"
)

class AlexaSkillLinkScreenEvent : DefaultScreenViewedEvent(
    screenName = "Alexa Skill - Link Screen"
)

class AlexaSkillUnlinkScreenEvent : DefaultScreenViewedEvent(
    screenName = "Alexa Skill - Unlink Screen"
)

class SwapFragranceScreenEvent(
    deviceControlVariant: DeviceControlVariant
) : DefaultScreenViewedEvent(
    screenName = "Swap Fragrance Screen",
    customProperties = mapOf(
        VARIANT_KEY to deviceControlVariant.variant
    )
)

class DiffuserMainControlScreen(
    fragranceSku: String,
    fragranceRemaining: Long
) : DefaultScreenViewedEvent(
    screenName = "Diffuser Main Control Screen",
    customProperties = mapOf(
        SKU_KEY to fragranceSku,
        FRAGRANCE_REMAINING_KEY to fragranceRemaining
    )
)

class FragranceSetUpScanFragranceQRCodeScreenEvent(
    deviceControlVariant: DeviceControlVariant
) : DefaultScreenViewedEvent(
    screenName = "Fragrance Setup - Scan QR Code Screen",
    customProperties = mapOf(
        VARIANT_KEY to deviceControlVariant.variant
    )
)

class FragranceSetUpRemoveFragranceVialScreenEvent(
    deviceControlVariant: DeviceControlVariant
) : DefaultScreenViewedEvent(
    screenName = "Fragrance Setup - Remove Vial Screen",
    customProperties = mapOf(
        VARIANT_KEY to deviceControlVariant.variant
    )
)

class FragranceSetUpInsertFragranceVialScreenEvent(
    deviceControlVariant: DeviceControlVariant
) : DefaultScreenViewedEvent(
    screenName = "Fragrance Setup - Insert Vial Screen",
    customProperties = mapOf(
        VARIANT_KEY to deviceControlVariant.variant
    )
)

abstract class OnboardingDiffusers(
    screenName: String
) : DefaultScreenViewedEvent(
    screenName = screenName
) {
    class SelectDiffuserTypeScreen : OnboardingDiffusers(
        screenName = "Onboard Diffusers - Select Diffuser Type Screen"
    )
}

abstract class CarOnboarding(
    screenName: String
) : DefaultScreenViewedEvent(
    screenName = screenName
) {
    class PlugInAndTurnOnDiffuserScreen : CarOnboarding(
        screenName = "Car Onboarding - Plug In and Turn On Diffuser Screen"
    )

    class ScanningForDiffuserScreen : CarOnboarding(
        screenName = "Car Onboarding - Scanning For Diffuser Screen"
    )

    class ConnectingToDiffuserScreen : CarOnboarding(
        screenName = "Car Onboarding - Connecting to Diffuser Screen"
    )

    class NameDeviceScreen : CarOnboarding(
        screenName = "Car Onboarding - Name Device Screen"
    )

    class InsertFragranceScreen : CarOnboarding(
        screenName = "Car Onboarding - Insert Fragrance Screen"
    )

    class FragranceDetectedScreen : CarOnboarding(
        screenName = "Car Onboarding - Fragrance Detected Screen"
    )

    class AutoFeatureEducationScreen : CarOnboarding(
        screenName = "Car Onboarding - Auto Feature Education Screen"
    )

    class MagnetEducationScreen : CarOnboarding(
        screenName = "Car Onboarding - Magnet Education Screen"
    )

    class StrapEducationScreen : CarOnboarding(
        screenName = "Car Onboarding - Strap Education Screen"
    )

    class ManualControlEducationScreen : CarOnboarding(
        screenName = "Car Onboarding - Manual Control Education Screen"
    )

    class LegalAcknowledgmentScreen : CarOnboarding(
        screenName = "Car Onboarding - Legal Acknowledgment Screen"
    )

    class SetupCompleteScreen : CarOnboarding(
        screenName = "Car Onboarding - Diffuser Setup Complete Screen"
    )
}

class DeviceControlTimerScreenEvent : DefaultScreenViewedEvent(
    screenName = "Device Control - Timer Screen"
)

abstract class CarSettings(
    screenName: String
) : DefaultScreenViewedEvent(
    screenName = screenName
) {
    class MainScreen : CarSettings(
        screenName = "Car Settings - Main Screen"
    )

    class FragranceDetailsScreen : CarSettings(
        screenName = "Car Settings - Fragrance Details Screen"
    )

    class ChangeFragranceScreen : CarSettings(
        screenName = "Car Settings - How to Change Fragrance Screen"
    )

    class DiffuserInfoScreen : CarSettings(
        screenName = "Car Settings - Diffuser Info Screen"
    )

    class SettingsScreen : CarSettings(
        screenName = "Car Settings - Settings Screen"
    )

    class HelpCenterScreen : CarSettings(
        screenName = "Car Settings - Help Center Screen"
    )

    class ForgetDiffuserScreen : CarSettings(
        screenName = "Car Settings - Forget Diffuser Screen"
    )
}

class CarDiffuserMainControlScreen(
    sku: String,
    fragranceRemaining: Long
) : DefaultScreenViewedEvent(
    screenName = "Car Diffuser - Main Control Screen",
    customProperties = mapOf(
        SKU_KEY to sku,
        FRAGRANCE_REMAINING_KEY to fragranceRemaining
    )
)

class UnknownFragranceScanScreen : DefaultScreenViewedEvent(
    screenName = "Unknown Fragrance - Scan Fragrance Screen"
)

enum class ScheduleVariantEvent(val variant: String) {
    LEGACY_SCHEDULES("legacy schedules"),
    INTUITIVE_SCHEDULES_V1("intuitive schedules V1")
}

enum class AnalyticsAppFlow(val value: String) {
    // Onboarding
    ONBOARDING("Onboarding"),
    CHANGE_WIFI("Change WiFi"),
    DIFFUSER_RESET("Device Reset"),
    SETUP_UPDATE("Setup Update"),

    // Scheduling
    SCHEDULE_SETUP("Schedules"),

    SWAP_FRAGRANCE("Swap Fragrance"),

    DIFFUSER_SETTINGS("Diffuser Settings"),

    DIFFUSER_CONTROL("Diffuser Control"),

    DIFFUSER_LIST("Diffuser List")
}

enum class FragranceRuntimeVariant(val runtime: String) {
    GENERAL("general"),
    SCENT_SPECIFIC("scent-specific runtime")
}

enum class DeviceControlVariant(val variant: String) {
    LEGACY_DEVICE_CONTROL("legacy device control"),
    V4_DEVICE_CONTROL("v4 device control")
}
