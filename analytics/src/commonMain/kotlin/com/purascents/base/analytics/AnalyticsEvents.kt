@file:Suppress("unused")

package com.purascents.base.analytics

import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ACTION_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BAY_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BLUETOOTH_APP_PERMISSION_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BLUETOOTH_ENABLED_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BLUETOOTH_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.BRAND_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CLICK_SOURCE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.COLOR_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CONFLICT_RUNNING_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CONFLICT_SCHEDULE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.CURRENT_FIRMWARE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DAYS_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DAYS_SINCE_REFILL
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DEVICE_COUNT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DEVICE_ID_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DEVICE_SETUP_VERSION_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DEVICE_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DIFFUSERS_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DIFFUSER_ID_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DIFFUSER_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.DIFFUSER_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.EMAIL_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.END_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.END_TIME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ERROR_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.EVENT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FRAGRANCE_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.FW_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.HW_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.INPUT_METHOD_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.INTENSITY_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.IS_ONBOARDED_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.LIGHT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.METHOD_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.MODE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.NETWORK_SECURED_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.OLD_WEARING_TIME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ON_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.PAGE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.PAYLOAD
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.PLACE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.RATING_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.REASON_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.RESULT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ROOM_NAME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.ROOM_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.RSSI_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.RUNTIME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SERVICE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SIZE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.START_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.START_TIME_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.STATE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.STATUS_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SUCCESS_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.SWAPPED_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.TIME_ZONE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.VALUE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.VARIANT_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.VARIANT_SKU_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.VIEW_TYPE_KEY
import com.purascents.base.analytics.AnalyticsKeyConstants.Companion.WEARING_TIME_KEY
import kotlinx.serialization.json.JsonElement
import kotlinx.serialization.json.JsonObject
import kotlinx.serialization.json.JsonObjectBuilder
import kotlinx.serialization.json.JsonPrimitive
import kotlinx.serialization.json.buildJsonObject
import kotlinx.serialization.json.put

abstract class AnalyticsEvent {
    abstract val key: String

    abstract fun parameters(): JsonObject?

    abstract fun parametersAsMap(): Map<String, Any?>
}

class LightTurned(
    isOn: Boolean,
    deviceId: String
) : DefaultAppEvent(
    eventName = "Light Turned",
    diffuserId = deviceId,
    customProperties = mapOf(
        ON_KEY to isOn
    )
)

class LightBrightnessChanged(
    value: Int,
    deviceId: String
) : DefaultAppEvent(
    eventName = "Light Brightness Changed",
    diffuserId = deviceId,
    customProperties = mapOf(
        VALUE_KEY to value
    )
)

class LightColorChanged(
    hexColor: String,
    deviceId: String
) : DefaultAppEvent(
    eventName = "Light Color Changed",
    diffuserId = deviceId,
    customProperties = mapOf(
        COLOR_KEY to hexColor
    )
)

class BayToggled(
    bayMode: BayMode,
    eventType: BayEventType,
    bayType: DeviceBayType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Bay Toggled",
    diffuserId = deviceId,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        BAY_KEY to bayType.bayIndex,
        MODE_KEY to bayMode.serializedName,
        EVENT_KEY to eventType.name.lowercase()
    )
)

class AlwaysOnActivated(
    hasConflict: Boolean,
    bayType: DeviceBayType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Always On Activated",
    diffuserId = deviceId,
    customProperties = mapOf(
        BAY_KEY to bayType.bayIndex,
        CONFLICT_RUNNING_KEY to hasConflict
    )
)

class StartTimerTapped(
    source: ScreenEvent,
    hasRunningConflict: Boolean,
    hasFutureConflict: Boolean,
    timerRuntime: Long,
    bayType: DeviceBayType,
    fragranceName: String? = "",
    variantSku: String? = "",
    deviceId: String? = ""
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        VARIANT_SKU_KEY to variantSku.orEmpty(),
        DEVICE_ID_KEY to deviceId.orEmpty(),
        BAY_KEY to bayType.bayIndex,
        RUNTIME_KEY to timerRuntime,
        FRAGRANCE_NAME_KEY to fragranceName.orEmpty(),
        CONFLICT_RUNNING_KEY to hasRunningConflict,
        CONFLICT_SCHEDULE_KEY to hasFutureConflict
    )
)

class StartTimerFailed(
    bayType: DeviceBayType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Start Timer Failed",
    diffuserId = deviceId,
    customProperties = mapOf(
        BAY_KEY to bayType.bayIndex
    )
)

class StartTimerSucceeded(
    bayType: DeviceBayType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Start Timer Succeeded",
    diffuserId = deviceId,
    customProperties = mapOf(
        BAY_KEY to bayType.bayIndex
    )
)

class FragranceIntensitySet(
    value: Int,
    bayType: DeviceBayType,
    wearingTime: Long?,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Intensity Set",
    diffuserId = deviceId,
    customProperties = mapOf(
        INTENSITY_KEY to value,
        WEARING_TIME_KEY to (wearingTime ?: 0L),
        BAY_KEY to bayType.bayIndex
    )
)

class NoFragranceSmelled(
    wearingTime: Long?,
    daysSinceRefill: Long?,
    fragranceName: String? = "",
    variantSku: String? = "",
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "No Fragrance Smelled",
    diffuserId = deviceId,
    customProperties = mapOf(
        FRAGRANCE_NAME_KEY to fragranceName.orEmpty(),
        VARIANT_SKU_KEY to variantSku.orEmpty(),
        WEARING_TIME_KEY to (wearingTime ?: 0L),
        DAYS_SINCE_REFILL to (daysSinceRefill ?: 0L)
    )
)

class BaySkipped(
    bayType: DeviceBayType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Bay Skipped",
    diffuserId = deviceId,
    customProperties = mapOf(
        BAY_KEY to bayType.bayIndex
    )
)

class AmbientModeSet(
    isOn: Boolean,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Ambient Mode Set",
    diffuserId = deviceId,
    customProperties = mapOf(
        ON_KEY to isOn
    )
)

class AwayModeSet(
    isOn: Boolean,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Away Mode Set",
    diffuserId = deviceId,
    customProperties = mapOf(
        ON_KEY to isOn
    )
)

class AwayModeTriggered(
    eventType: AwayModeEventType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Away Mode Triggered",
    diffuserId = deviceId,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        STATUS_KEY to when (eventType) {
            AwayModeEventType.LEAVE -> AwayModeStatus.AWAY.status
            AwayModeEventType.ENTER -> AwayModeStatus.HOME.status
        }
    )
)

class TimezoneSet(
    timezone: String,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Time Zone Set",
    diffuserId = deviceId,
    customProperties = mapOf(
        TIME_ZONE_KEY to timezone
    )
)

class RoomNameSet(
    roomName: String,
    roomType: String,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Room Name Set",
    diffuserId = deviceId,
    customProperties = mapOf(
        ROOM_NAME_KEY to roomName,
        ROOM_TYPE_KEY to roomType
    )
)

class FragranceSwapped(
    variantSku: String,
    fragranceName: String,
    brand: String,
    roomName: String,
    roomType: String,
    swapped: Boolean,
    bayNumber: Int,
    wearingTime: Long,
    oldWearingTime: Long,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Fragrance Swapped",
    diffuserId = deviceId,
    customProperties = mapOf(
        VARIANT_SKU_KEY to variantSku,
        SWAPPED_KEY to swapped,
        ROOM_NAME_KEY to roomName,
        ROOM_TYPE_KEY to roomType,
        BAY_KEY to bayNumber,
        BRAND_KEY to brand,
        WEARING_TIME_KEY to wearingTime,
        OLD_WEARING_TIME_KEY to oldWearingTime,
        FRAGRANCE_NAME_KEY to fragranceName
    )
)

class DeviceSetupStarted(
    setupVersion: DiffuserSetupVersion,
    deviceId: String? = "",
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Device Setup Started",
    diffuserId = deviceId,
    flow = flow.orEmpty(),
    eventType = EventType.APP.type,
    customProperties = mapOf(
        DEVICE_SETUP_VERSION_KEY to setupVersion.serializedName,
        VARIANT_KEY to variant.orEmpty()
    )
)

class OnboardingDone(
    source: ScreenEvent?,
    diffuserId: String? = "",
    flow: AnalyticsAppFlow,
    diffuserType: DiffuserAnalyticsType,
    hw: String = String.EMPTY,
    fw: String = String.EMPTY
) : DefaultAppEvent(
    eventName = "Onboarding Done",
    diffuserId = diffuserId,
    flow = flow.value,
    screenName = source?.screenName.orEmpty(),
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        HW_KEY to hw,
        FW_KEY to fw
    )
)

class DeviceSetupAbandoned(
    setupVersion: DiffuserSetupVersion,
    deviceId: String? = "",
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Device Setup Abandoned",
    diffuserId = deviceId,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        DEVICE_SETUP_VERSION_KEY to setupVersion.serializedName,
        VARIANT_KEY to variant.orEmpty()
    )
)

class SignOutConfirmed(
    email: String?
) : DefaultAppEvent(
    eventName = "Sign Out Confirmed",
    diffuserId = null,
    customProperties = mapOf(
        EMAIL_KEY to email.orEmpty()
    )
)

class DeleteAccountConfirmed(
    email: String?
) : DefaultAppEvent(
    eventName = "Delete Account Confirmed",
    diffuserId = null,
    customProperties = mapOf(
        EMAIL_KEY to email.orEmpty()
    )
)

class ReferralSent(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Referral Sent",
    diffuserId = deviceId
)

class InviteCodeCopied(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Invite Code Copied",
    diffuserId = deviceId
)

class TutorialStarted(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Tutorial Started",
    diffuserId = deviceId
)

class TutorialCompleted(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Tutorial Completed",
    diffuserId = deviceId
)

class TutorialClosed(
    source: ScreenEvent?,
) : DefaultAppEvent(
    eventName = "Tutorial Closed",
    screenName = source?.screenName.orEmpty(),
    diffuserId = null
)

class TutorialNextTapped(
    source: ScreenEvent,
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    buttonText = "Next",
)

class DevicePositionChanged(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Device Position Changed",
    diffuserId = deviceId
)

class SetupVideoOpened : DefaultAppEvent(
    eventName = "Setup Video Opened",
    diffuserId = null
)

class DeviceReset(
    resetType: DeviceResetType,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Device Reset",
    diffuserId = deviceId,
    customProperties = mapOf(
        TYPE_KEY to resetType.serializedName
    )
)

class SignInComplete(
    method: AuthMethod,
    email: String?,
    isSuccess: Boolean
) : DefaultAppEvent(
    eventName = "Sign in complete",
    diffuserId = null,
    customProperties = mapOf(
        INPUT_METHOD_KEY to method.serializedName,
        EMAIL_KEY to email.orEmpty(),
        RESULT_KEY to if (isSuccess) "success" else "failure"
    )
)

class SignUpCompleted(
    method: AuthMethod,
    email: String
) : DefaultAppEvent(
    eventName = "Sign Up Completed",
    diffuserId = null,
    customProperties = mapOf(
        INPUT_METHOD_KEY to method.serializedName,
        EMAIL_KEY to email
    )
)

class LocationPermissionUpdated(
    state: PermissionState,
    place: PermissionPlace
) : DefaultAppEvent(
    eventName = "Location Permission Updated",
    diffuserId = null,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase(),
        PLACE_KEY to place.serializedName
    )
)

class CameraPermissionUpdated(
    state: PermissionState,
    place: PermissionPlace,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Camera Permission Updated",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase(),
        PLACE_KEY to place.serializedName
    )
)

class BluetoothPermissionUpdated(
    state: PermissionState,
    place: PermissionPlace,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Bluetooth Permission Updated",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase(),
        PLACE_KEY to place.serializedName
    )
)

class NotificationPermissionUpdated(
    state: PermissionState,
    place: PermissionPlace,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Notification Permission Updated",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase(),
        PLACE_KEY to place.serializedName
    )
)

class LocationPrimer(
    state: PermissionState
) : DefaultAppEvent(
    eventName = "Location Primer",
    diffuserId = null,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase()
    )
)

class CameraPrimer(
    state: PermissionState,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Camera Primer",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase()
    )
)

class BluetoothPrimer(
    state: PermissionState,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Bluetooth Primer",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase()
    )
)

class NotificationPrimer(
    state: PermissionState,
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Notification Primer",
    diffuserId = deviceId,
    customProperties = mapOf(
        STATE_KEY to state.name.lowercase()
    )
)

class ScheduleSetupEvent(
    isEditing: Boolean,
    scheduleName: String,
    days: List<String>,
    startTime: String,
    endTime: String,
    isLightOn: Boolean,
    lightColorHex: String,
    fragranceName: String,
    variantSku: String,
    fragranceIntensity: Int,
    deviceId: String? = "",
    bayType: DeviceBayType,
    appFlow: AnalyticsAppFlow,
    variant: SchedulesVariant
) : DefaultAppEvent(
    eventName = if (!isEditing) "Schedule Created" else "Schedule Updated",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        NAME_KEY to scheduleName,
        FRAGRANCE_NAME_KEY to fragranceName,
        VARIANT_SKU_KEY to variantSku,
        DAYS_KEY to days,
        START_KEY to startTime,
        END_KEY to endTime,
        LIGHT_KEY to isLightOn,
        COLOR_KEY to lightColorHex,
        INTENSITY_KEY to fragranceIntensity,
        BAY_KEY to bayType.bayIndex,
        VARIANT_KEY to variant.serializedName
    )
)

class ScheduleDeleted(
    deviceId: String? = "",
    fragranceName: String,
    variantSku: String,
    bayType: DeviceBayType,
    variant: SchedulesVariant,
    appFlow: AnalyticsAppFlow
) : DefaultAppEvent(
    eventName = "Schedule Deleted",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        FRAGRANCE_NAME_KEY to fragranceName,
        VARIANT_SKU_KEY to variantSku,
        BAY_KEY to bayType.bayIndex,
        VARIANT_KEY to variant.serializedName
    )
)

class ScheduleButtonClicked(
    deviceId: String? = "",
    place: ScheduleButtonPlace
) : DefaultAppEvent(
    eventName = "Schedule Button Clicked",
    diffuserId = deviceId,
    customProperties = mapOf(
        PLACE_KEY to place.serializedName
    )
)

class AddNewScheduleClicked(
    deviceId: String? = "",
    appFlow: AnalyticsAppFlow,
    variant: SchedulesVariant
) : DefaultAppEvent(
    eventName = "Add New Schedule Clicked",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        VARIANT_KEY to variant.serializedName
    )
)

class UpdateScheduleClicked(
    deviceId: String? = "",
    viewType: SchedulesViewType,
    appFlow: AnalyticsAppFlow,
    variant: SchedulesVariant
) : DefaultAppEvent(
    eventName = "Update Schedule Clicked",
    diffuserId = deviceId,
    appFlow.value,
    customProperties = mapOf(
        VIEW_TYPE_KEY to viewType.serializedName,
        VARIANT_KEY to variant.serializedName
    )
)

class ScheduleStateChanged(
    deviceId: String? = "",
    scheduleState: ScheduleState,
    bayType: DeviceBayType,
    variant: SchedulesVariant,
    scheduleName: String,
    days: List<String>,
    startTime: String,
    endTime: String,
    fragranceName: String,
    fragranceCode: String
) : DefaultAppEvent(
    eventName = "Schedule State Changed",
    diffuserId = deviceId,
    customProperties = mapOf(
        VARIANT_SKU_KEY to fragranceCode,
        NAME_KEY to scheduleName,
        FRAGRANCE_NAME_KEY to fragranceName,
        START_KEY to startTime,
        END_KEY to endTime,
        DAYS_KEY to days,
        BAY_KEY to bayType.bayIndex,
        STATE_KEY to scheduleState.serializedName,
        VARIANT_KEY to variant.serializedName
    )
)

class PrebuiltScheduleClicked(
    deviceId: String? = "",
    variant: SchedulesVariant,
    days: List<String>,
    startTime: String,
    endTime: String,
    name: String,
    appFlow: AnalyticsAppFlow
) : DefaultAppEvent(
    eventName = "Prebuilt Schedule Clicked",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        NAME_KEY to name,
        START_KEY to startTime,
        END_KEY to endTime,
        DAYS_KEY to days,
        VARIANT_KEY to variant.serializedName
    )
)

class ScheduleTypeSelected(
    deviceId: String? = "",
    variant: SchedulesVariant,
    type: ScheduleType,
    appFlow: AnalyticsAppFlow
) : DefaultAppEvent(
    eventName = "Schedule Type Selected",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        TYPE_KEY to type.serializedName,
        VARIANT_KEY to variant.serializedName
    )
)

class SaveScheduleClicked(
    deviceId: String? = "",
    appFlow: AnalyticsAppFlow,
    variant: SchedulesVariant
) : DefaultAppEvent(
    eventName = "Save Schedule Clicked",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        VARIANT_KEY to variant.serializedName
    )
)

class ScheduleSetupAbandoned(
    deviceId: String? = "",
    appFlow: AnalyticsAppFlow
) : DefaultAppEvent(
    eventName = "Schedule Setup Abandoned",
    diffuserId = deviceId,
    flow = appFlow.value,
    customProperties = mapOf(
        VARIANT_KEY to SchedulesVariant.INTUITIVE_V1.serializedName
    )
)

class TrySchedulesClosed(
    action: TrySchedulesClosedAction
) : DefaultAppEvent(
    eventName = "Try Schedules Closed",
    diffuserId = null,
    customProperties = mapOf(
        ACTION_KEY to action.serializedName
    )
)

class StatusBannerClicked(
    deviceId: String? = "",
    statusBannerAction: StatusBannerAction
) : DefaultAppEvent(
    eventName = "Status Banner Clicked",
    diffuserId = deviceId,
    customProperties = mapOf(
        ACTION_KEY to statusBannerAction.serializedName
    )
)

class WifiSetupResult(
    deviceId: String? = "",
    isSuccess: Boolean,
    failureReason: String?
) : DefaultAppEvent(
    eventName = "Wifi Setup Result",
    diffuserId = deviceId,
    customProperties = mapOf(
        RESULT_KEY to if (isSuccess) "Success" else "Failure",
        REASON_KEY to failureReason.orEmpty()
    )
)

class ForgetDeviceCompleted(
    deviceId: String? = ""
) : DefaultAppEvent(
    eventName = "Forget Device Completed",
    diffuserId = deviceId
)

class MarketPlaceOpened : DefaultAppEvent(
    eventName = "Marketplace opened",
    diffuserId = null
)

class AppRatingUpdated(
    action: AppRatingAction,
    rating: Float? = null
) : DefaultAppEvent(
    eventName = "App Rating Updated",
    diffuserId = null,
    customProperties = mapOf(
        ACTION_KEY to action.name.lowercase(),
        RATING_KEY to (rating ?: 0.0)
    )
)

class OverMidnightWarningClicked(
    action: OverMidnightWarningAction
) : DefaultAppEvent(
    eventName = "Over-midnight Warning Clicked",
    diffuserId = null,
    customProperties = mapOf(
        ACTION_KEY to action.serializedName
    )
)

class ContinueSetupTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class AddAnotherScheduleTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ShopAsGuestTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class SignUpTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class SignInTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class SignUpWithServiceTapped(
    source: ScreenEvent,
    authMethod: AuthMethod
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        SERVICE_KEY to when (authMethod) {
            AuthMethod.GOOGLE -> authMethod.serializedName
            AuthMethod.FACEBOOK -> authMethod.serializedName
            AuthMethod.FREE_FORM -> "email"
        }
    )
)

class SignInWithServiceTapped(
    source: ScreenEvent,
    authMethod: AuthMethod
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        SERVICE_KEY to when (authMethod) {
            AuthMethod.GOOGLE -> authMethod.serializedName
            AuthMethod.FACEBOOK -> authMethod.serializedName
            AuthMethod.FREE_FORM -> "email"
        }
    )
)

class ForgotYourPasswordTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class WhereIsTheResetButtonTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class DevicesFound(
    source: ScreenEvent,
    flow: AnalyticsAppFlow,
    diffuserType: DiffuserAnalyticsType,
    diffusers: List<BleScannedDiffuserAnalyticData> = emptyList()
) : DefaultAppEvent(
    eventName = "Diffusers Found",
    flow = flow.value,
    screenName = source.screenName,
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        DIFFUSERS_KEY to diffusers.map {
            mapOf(
                BLUETOOTH_NAME_KEY to it.bluetoothName,
                IS_ONBOARDED_KEY to it.isOnboarded
            )
        }
    )
)

data class BleScannedDiffuserAnalyticData(val bluetoothName: String, val isOnboarded: Boolean)

class DidNotFindDiffuser(
    source: ScreenEvent,
    setupVersion: DiffuserSetupVersion
) : DefaultAppEvent(
    eventName = "Did Not Find Diffuser",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        DEVICE_SETUP_VERSION_KEY to setupVersion.serializedName,
        CLICK_SOURCE_KEY to source.screenName
    )
)

class DiffuserConnected(
    source: ScreenEvent,
    diffuserId: String,
    diffuserName: String,
    hw: String,
    fw: String,
    diffuserType: DiffuserAnalyticsType,
    flow: String? = null
) : DefaultAppEvent(
    eventName = "Diffuser Connected",
    diffuserId = diffuserId,
    eventType = EventType.APP.type,
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        DIFFUSER_NAME_KEY to diffuserName,
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        HW_KEY to hw,
        FW_KEY to fw
    )
)

class RestartScanTapped(
    source: ScreenEvent,
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AddNetworkManuallyTapped(
    source: ScreenEvent,
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class SendWiFiPasswordTapped(
    source: ScreenEvent,
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillLoaded(
    isAccountLinked: Boolean,
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Loaded",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        STATUS_KEY to if (isAccountLinked) "linked" else "unlinked",
        CLICK_SOURCE_KEY to source.screenName
    )
)

class AlexaSkillLinkSkillTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillLearnMoreTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillPuraCodeReceived(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Pura Code Received",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class AlexaSkillAlexaCodeReceived(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Alexa Code Received",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class AlexaSkillLinked(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Linked",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class AlexaSkillViewTutorialTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillUnlinkSkillTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AlexaSkillUnlinkSkillConfirmed(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Unlink Skill Confirmed",
    diffuserId = null,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class AlexaSkillUnlinked(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Alexa Skill - Unlinked",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class CarBannerTapped(
    source: ScreenEvent,
    deviceId: String,
    deviceName: String
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        "device_id" to deviceId,
        "device_name" to deviceName
    )
)

class NotificationTapped(
    source: ScreenEvent,
    notificationTitle: String
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    buttonText = notificationTitle
)

class DiffuserListStartedLoading(
    source: ScreenEvent,
) : DefaultAppEvent(
    eventName = "Diffuser List Started Loading",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class DiffuserListLoaded(
    source: ScreenEvent,
    deviceCount: Int,
) : DefaultAppEvent(
    eventName = "Diffuser List Loaded",
    diffuserId = null,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName,
        DEVICE_COUNT_KEY to deviceCount
    )
)

class NotificationMarkedAsRead(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Notification Marked As Read",
    diffuserId = null,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class NotificationMarkedAsUnread(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Notification Marked As Unread",
    diffuserId = null,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class NotificationSnoozeTapped(
    source: ScreenEvent
) : DefaultAppEvent(
    eventName = "Notification Snooze Tapped",
    diffuserId = null,
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName
    )
)

class SetUpDiffuserTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class ShopDiffusersTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class WatchSetupVideoTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class AddDiffuserTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class SetupStartedButtonTapped(
    source: ScreenEvent,
    diffuserAnalyticsType: DiffuserAnalyticsType,
    bluetoothEnabled: Boolean,
    bluetoothAppPermissionAllowed: Boolean,
    flow: AnalyticsAppFlow,
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    buttonText = diffuserAnalyticsType.serializedName,
    flow = flow.value,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserAnalyticsType.serializedName,
        BLUETOOTH_ENABLED_KEY to bluetoothEnabled,
        BLUETOOTH_APP_PERMISSION_KEY to bluetoothAppPermissionAllowed
    )
)

class INeedHelpTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class LatestVersionTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class SettingsAppTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ReadFullSupportArticleTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class Pura3Detected(
    source: ScreenEvent,
    flow: String,
    diffuserType: DiffuserAnalyticsType,
) : DefaultAppEvent(
    eventName = "Pura 3 Detected",
    diffuserId = null,
    flow = flow,
    screenName = source.screenName,
    eventType = EventType.APP.type,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
    )
)

class Pura3DetectedModalButtonTapped(
    source: ScreenEvent,
    buttonText: String,
    flow: String,
    diffuserType: DiffuserAnalyticsType,
) : DefaultButtonTappedEvent(
    buttonText = buttonText,
    flow = flow,
    screenName = source.screenName,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
    )
)

class DiffuserSelected(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Diffuser Selected",
    diffuserId = null,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        CLICK_SOURCE_KEY to source.screenName
    )
)

class IDontSeeMyDiffuserTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class SelectDifferentDiffuserTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class DiffuserConfigurationStart(
    deviceId: String,
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Diffuser Configuration Start",
    diffuserId = deviceId,
    flow = flow.orEmpty(),
    eventType = EventType.APP.type,
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class DiffuserConfigurationFinish(
    deviceId: String,
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Diffuser Configuration Finish",
    diffuserId = deviceId,
    flow = flow.orEmpty(),
    eventType = EventType.APP.type,
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class WifiConnectedResult(
    source: ScreenEvent,
    diffuserId: String,
    diffuserType: DiffuserAnalyticsType,
    isConnected: Boolean,
    rssi: String?,
    error: ErrorType? = null,
    flow: String? = null
) : DefaultAppEvent(
    eventName = "WiFi Connected Result",
    diffuserId = diffuserId,
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        RESULT_KEY to isConnected,
        RSSI_KEY to (rssi?.takeIf { it.isNotBlank() } ?: "N/A"),
        ERROR_KEY to error?.value.orEmpty()
    )
) {
    abstract class ErrorType(val serializedName: String) {

        open val value: String
            get() = serializedName

        data object WrongPassword : ErrorType("wrong password")
        data object ConnectionFailed : ErrorType("connection failed")
        data object FrameError : ErrorType("frame error")
        data object DiffuserDisconnected : ErrorType("diffuser disconnected")
        data object DiffuserNotResponding : ErrorType("diffuser not responding")
        data object BluetoothDisabled : ErrorType("bluetooth disabled")
        data class UnknownError(val error: Throwable?) : ErrorType("unknown error") {
            override val value: String
                get() = "$serializedName: ${error?.message}"
        }
    }
}

class BayButtonTapped(
    source: ScreenEvent,
    buttonText: String,
    flow: AnalyticsAppFlow,
    deviceId: String,
    diffuserAnalyticsType: DiffuserAnalyticsType
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    buttonText = buttonText,
    flow = flow.value,
    customProperties = mapOf(
        DIFFUSER_ID_KEY to deviceId,
        DIFFUSER_TYPE_KEY to diffuserAnalyticsType.serializedName
    )
)

class ScanFragranceVialsTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ChangeFragranceVialsTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class FragranceAdded(
    source: ScreenEvent,
    diffuserId: String,
    bay: DeviceBayType,
    fragranceCode: String,
    fragranceName: String,
    insertionMethod: FragranceInsertionMethod,
    evenType: EventType,
    flow: AnalyticsAppFlow,
    deviceType: DiffuserAnalyticsType
) : DefaultAppEvent(
    eventName = "Fragrance Added",
    diffuserId = diffuserId,
    flow = flow.value,
    eventType = evenType.type,
    screenName = source.screenName,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to deviceType.serializedName,
        METHOD_KEY to insertionMethod.serializedName,
        FRAGRANCE_NAME_KEY to fragranceName,
        VARIANT_SKU_KEY to fragranceCode,
        BAY_KEY to bay.bayIndex,
    )
)

class SkipBayConfirmContinueTapped(
    source: ScreenEvent,
    deviceId: String,
    inputMethod: FragranceInputMethod,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        DEVICE_ID_KEY to deviceId,
        INPUT_METHOD_KEY to inputMethod.serializedName
    )
)

class SkipBayConfirmCancelTapped(
    source: ScreenEvent,
    deviceId: String,
    inputMethod: FragranceInputMethod,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        DEVICE_ID_KEY to deviceId,
        INPUT_METHOD_KEY to inputMethod.serializedName
    )
)

class LearnMoreTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class TryAgainTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ChooseDifferentNetworkTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ConnectTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class WifiNetworkSelected(
    source: ScreenEvent,
    networkSecured: Boolean,
    flow: String? = null,
    variant: String? = null,
    diffuserId: String
) : DefaultAppEvent(
    eventName = "WiFi Network Selected",
    diffuserId = diffuserId,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        CLICK_SOURCE_KEY to source.screenName,
        VARIANT_KEY to variant.orEmpty(),
        NETWORK_SECURED_KEY to networkSecured
    )
)

class IdontSeeMyWifiNetworkTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class WifiListReceived(
    source: ScreenEvent,
    size: Int,
    deviceId: String,
    diffuserAnalyticsType: DiffuserAnalyticsType,
    flow: String? = null,
) : DefaultAppEvent(
    eventName = "List of WiFi Networks Received",
    diffuserId = deviceId,
    flow = flow.orEmpty(),
    eventType = EventType.APP.type,
    screenName = source.screenName,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserAnalyticsType.serializedName,
        SIZE_KEY to size,
    )
)

class AttemptToConnectToWiFi(
    source: ScreenEvent,
    diffuserId: String,
    diffuserType: DiffuserAnalyticsType,
    method: Method,
    rssi: String? = null,
    flow: String? = null,
) : DefaultAppEvent(
    eventName = "Attempt to Connect to WiFi",
    eventType = EventType.APP.type,
    flow = flow ?: "",
    screenName = source.screenName,
    diffuserId = diffuserId,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        METHOD_KEY to method.value,
        RSSI_KEY to (rssi?.takeIf { it.isNotBlank() } ?: "N/A")
    )
) {
    enum class Method(val value: String) {
        SAVED("Saved"),
        SEARCHED("Searched"),
        MANUAL("Manual")
    }
}

class FirmwareUpdateStart(
    source: ScreenEvent,
    diffuserType: DiffuserAnalyticsType,
    diffuserId: String,
    currentFirmware: String?,
    flow: String? = null
) : DefaultAppEvent(
    eventName = "Firmware Update Start",
    diffuserId = diffuserId,
    eventType = EventType.DEVICE.type,
    flow = flow.orEmpty(),
    screenName = source.screenName,
    customProperties = mapOf(
        DIFFUSER_TYPE_KEY to diffuserType.serializedName,
        START_TIME_KEY to getCurrentTimestampInSeconds(),
        CURRENT_FIRMWARE_KEY to currentFirmware.orEmpty()
    )
)

class FirmwareUpdateFinish(
    deviceType: DiffuserAnalyticsType,
    deviceId: String,
    success: Boolean,
    currentFirmware: String?,
    flow: String? = null,
    variant: String? = null
) : DefaultAppEvent(
    eventName = "Firmware Update Finish",
    diffuserId = deviceId,
    eventType = EventType.DEVICE.type,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        DEVICE_TYPE_KEY to deviceType.serializedName,
        END_TIME_KEY to getCurrentTimestampInSeconds(),
        DEVICE_ID_KEY to deviceId,
        SUCCESS_KEY to success,
        CURRENT_FIRMWARE_KEY to currentFirmware.orEmpty(),
        VARIANT_KEY to variant.orEmpty()
    )
)

class LearnMoreCarouselSkipTapped(
    source: ScreenEvent,
    page: LearnMoreCarouselPageName,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        PAGE_KEY to page.serializedName
    )
)

class LearnMoreCarouselNextTapped(
    source: ScreenEvent,
    page: LearnMoreCarouselPageName,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        PAGE_KEY to page.serializedName
    )
)

class LearnMoreCarouselContinueTapped(
    source: ScreenEvent,
    page: LearnMoreCarouselPageName,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty(),
        PAGE_KEY to page.serializedName
    )
)

class SoundsGoodTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class IdontSeeChipTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class ScanFragranceVialTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        VARIANT_KEY to source.parameters()?.get(VARIANT_KEY)?.toString().orEmpty()
    )
)

class InsertFragranceVialDoneTapped(
    source: ScreenEvent,
    deviceId: String,
    bay: DeviceBayType,
    fragranceCode: String
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        VARIANT_KEY to source.parameters()?.get(VARIANT_KEY)?.toString().orEmpty(),
        DEVICE_ID_KEY to deviceId,
        VARIANT_SKU_KEY to fragranceCode,
        BAY_KEY to bay.bayIndex
    )
)

class RemoveFragranceVialContinueTapped(
    source: ScreenEvent,
    bay: DeviceBayType
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        VARIANT_KEY to source.parameters()?.get("variant")?.toString().orEmpty(),
        BAY_KEY to bay.bayIndex
    )
)

class ScanFragranceQRCodeContinueTapped(
    source: ScreenEvent,
    bay: DeviceBayType,
    fragranceCode: String
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        VARIANT_KEY to source.parameters()?.get("variant")?.toString().orEmpty(),
        VARIANT_SKU_KEY to fragranceCode,
        BAY_KEY to bay.bayIndex
    )
)

class ContinueTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class RemindMeLaterTapped(
    source: ScreenEvent,
    flow: String? = null,
    variant: String? = null
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    flow = flow.orEmpty(),
    customProperties = mapOf(
        VARIANT_KEY to variant.orEmpty()
    )
)

class CarPairingModeContinueTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class CarNeedHelpTapped(
    source: ScreenEvent,
    helpPlace: CarOnboardingHelpPlace
) : DefaultButtonTappedEvent(
    screenName = source.screenName,
    customProperties = mapOf(
        PLACE_KEY to helpPlace.serializedName
    )
)

class CarDontSeeDiffuserTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

class CarRescanTapped(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
)

abstract class UnknownFragrance(
    source: ScreenEvent
) : DefaultButtonTappedEvent(
    screenName = source.screenName
) {

    class ScanFragranceCodeTapped(
        source: ScreenEvent = UnknownFragranceScanScreen()
    ) : UnknownFragrance(
        source = source
    )

    class CloseTapped(
        source: ScreenEvent = UnknownFragranceScanScreen()
    ) : UnknownFragrance(
        source = source
    )

    class ScanVialToAddTapped(
        source: ScreenEvent
    ) : UnknownFragrance(
        source = source
    )
}

class PushNotificationReceived(
    payload: String = "",
) : DefaultAppEvent(
    eventName = "Push Notification Received",
    eventType = EventType.APP.type,
    diffuserId = null,
    customProperties = mapOf(
        PAYLOAD to payload
    )
)

enum class EventType(val type: String) {
    USER("user"),
    APP("app"),
    DEVICE("device")
}

enum class AwayModeStatus(val status: String) {
    HOME("home"),
    AWAY("away")
}

enum class BayEventType {
    STARTED,
    STOPPED
}

enum class AwayModeEventType {
    LEAVE,
    ENTER
}

enum class DeviceResetType(val serializedName: String) {
    FACTORY_RESET("factory reset"),
    SOFT_RESET("soft reset"),
    WIFI_RESET("wifi reset")
}

enum class AuthMethod(val serializedName: String) {
    FREE_FORM("free form"),
    FACEBOOK("facebook"),
    GOOGLE("google")
}

enum class PermissionState {
    GRANTED,
    DENIED;

    companion object {
        fun getState(isGranted: Boolean): PermissionState {
            return if (isGranted) GRANTED else DENIED
        }
    }
}

enum class ScheduleState(val serializedName: String) {
    ACTIVE("active"),
    INACTIVE("inactive"),
    IGNORED("ignored");

    companion object {
        fun fromBoolean(isSelected: Boolean) = if (isSelected) {
            ACTIVE
        } else {
            INACTIVE
        }
    }
}

enum class PermissionPlace(val serializedName: String) {
    DEVICE_SETUP("device setup"),
    SETTING("settings")
}

enum class BayMode(val serializedName: String) {
    ALWAYS_ON("always on"),
    TIMER("timer"),
    SCHEDULE("schedule")
}

enum class AppRatingAction {
    DISMISS,
    NEVER,
    NOT_NOW,
    RATE_IN_STORE,
    SUBMIT
}

enum class DiffuserSetupVersion(val serializedName: String) {
    LEGACY("legacy device setup"),
    V4_ONBOARDING_V1("v4 onboarding"),
    PLUS_ONBOARDING_V1("plus onboarding"),
    MINI_ONBOARDING_V1("mini onboarding"),
    CAR_ONBOARDING_V1("car onboarding"),
    CAR_ONBOARDING_V2("car pro onboarding")
}

enum class ScheduleButtonPlace(val serializedName: String) {
    DEVICE_LIST("device list"),
    DEVICE_SETTINGS("device settings"),
    DEVICE_CONTROL("device control")
}

enum class SchedulesVariant(val serializedName: String) {
    LEGACY("legacy schedules"),
    INTUITIVE_V1("intuitive schedules V1")
}

enum class ScheduleType(val serializedName: String) {
    PREBUILT("prebuilt"),
    CUSTOM("custom")
}

enum class SchedulesViewType(val serializedName: String) {
    CALENDAR("calendar"),
    LIST("list")
}

enum class TrySchedulesClosedAction(val serializedName: String) {
    TRY_NOW("try now"),
    DISMISS("dismiss")
}

enum class StatusBannerAction(val serializedName: String) {
    LOW_FRAGRANCE("low fragrance"),
    DEVICE_OFFLINE("device offline"),
    ALWAYS_ON("always on"),
    TIMER("timer"),
    AWAY_MODE("away mode"),
    SCHEDULE("schedule"),
    NEXT_SCHEDULE("next schedule")
}

enum class OverMidnightWarningAction(val serializedName: String) {
    LEARN_MORE("learn more"),
    DISMISS("dismiss")
}

enum class LearnMoreCarouselPageName(val serializedName: String) {
    FRAGRANCE_TIMER("fragrance timer"),
    AWAY_MODE("away mode"),
    SCHEDULES("schedules"),
    SMART_ASSISTANT("smart assistant")
}

enum class DiffuserAnalyticsType(val serializedName: String) {
    PURA_CAR("Pura Car"),
    PURA_CAR_PRO("Pura Car Pro"),
    PURA_3("Pura 3"),
    PURA_4("Pura 4"),
    PURA_PLUS("Pura Plus"),
    PURA_MINI("Pura Mini"),
}

enum class FragranceInsertionMethod(val serializedName: String) {
    SMART_VIAL("Smart Vial"),
    QR_SCAN("Scan QR"),
    CODE_INPUT("Input Code")
}

enum class FragranceInputMethod(val serializedName: String) {
    MANUAL("manual"),
    SMART("smart")
}

enum class CarOnboardingHelpPlace(val serializedName: String) {
    PAIRING_MODE("pairing_mode"),
    DETECT_FRAGRANCE("detect_fragrance")
}

enum class DeviceBayType(val bayIndex: Int) {

    NONE(0),
    FIRST_BAY(1),
    SECOND_BAY(2);
}

internal fun buildUserTypeDefaultTapJson(
    source: ScreenEvent,
    flow: String?,
    variant: String?,
    additionalParams: (JsonObjectBuilder.() -> Unit)? = null
): JsonObject {
    val flowToUse = flow ?: source.parameters()?.get("flow")
    val variantToUse = variant ?: source.parameters()?.get("variant")
    return buildJsonObject {
        put("event_type", EventType.USER.type)
        put("click_source", source.screenName)
        flowToUse?.let {
            put(
                "flow",
                if (flowToUse is String) {
                    JsonPrimitive(flow)
                } else {
                    flowToUse as JsonElement
                }
            )
        }
        variantToUse?.let {
            put(
                "variant",
                if (variantToUse is String) {
                    JsonPrimitive(variant)
                } else {
                    variantToUse as JsonElement
                }
            )
        }
        additionalParams?.invoke(this)
    }
}

internal fun getCurrentTimestampInSeconds(): Long {
    return 0L
}
