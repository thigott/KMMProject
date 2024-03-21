# Pura-Multiplatform Library

## Introduction

Currently, the iOS and Android apps utilize different implementations of Analytics, resulting in inconsistencies when tracking events. This leads to identical events being recorded with varying names, properties, and structures across platforms.

To address this issue, we built a shared Analytics library and furnish mobile apps with methods for event tracking. This approach ensures that both iOS and Android apps track events uniformly, maintaining consistency in data and structure and resolving the inconsistencies problem.

Events documentation: https://fictional-doodle-gqym2r1.pages.github.io/

## iOS Usage

After importing the library it's time to configure it. The app should call the `configure` method and provide two actions: `logEvent` and `logScreen`. 

Example:

```swift
import PuraLibrary
import Segment 

let configuration = Segment.Configuration(writeKey: "segment_token")
    .trackApplicationLifecycleEvents(true)
    .flushAt(5) 
let service = Segment.Analytics(configuration: configuration)

let analytics = PuraMultiplatformLibrary.shared.analytics

analytics.configure { event in
    service.track(name: event.key, properties: event.parametersAsMap())
} screenAction: { screen in
    let key = AnalyticsKeyConstants().SCREEN_NAME_KEY
    service.screen(title: key, properties: screen.parametersAsMap())
}
```

Once configured, the app is ready to start tracking events, to do so, the app just need to call the `logEvent` and `logScreen` methods provided by the library.

Examples:

```swift
import PuraLibrary

func logEvent() {
    let event = LightTurned(isOn: true, deviceId: "any id")
    analytics.logEvent(event: event)
}

func logScreen() {
    let screen = FixMyDiffuserScreenEvent(diffuserSetupVersion: .v4OnboardingV1)
    analytics.logScreen(screen: screen)
}

func logButtonTapped() {
    let event = ContinueTapped(source: SignInScreenEvent(), flow: "any flow", variant: "any variant")
    analytics.logEvent(event: event)
}
```





