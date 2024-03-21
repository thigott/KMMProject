# Module Pura Analytics Library

### Pura Analytics library documentation
This library was built using Kotlin Multiplatform and will be used by Android and iOS apps in order to track events uniformly, maintaining consistency in data and structure and resolving the inconsistencies problem.

There are three main classes that defines the structure of the events:
- DefaultAppEvent
- DefaultButtonTappedEvent
- DefaultScreenViewedEvent

### DefaultAppEvent

This event has the following attributes:
- `eventName`
- `diffuserId`
- `flow`
- `eventType`
- `screenName`
- `customProperties`

Resulting in the following output

```yaml
{
   "event_name": String,
   "flow": String,
   "event_type": String,
   "screen_name": String,
   "custom_properties": {
      "diffuser_id": String
   }
}
```

### DefaultButtonTappedEvent

This event has the following attributes:
- `screenName`
- `buttonText`
- `flow`
- `eventType`
- `customProperties`

Resulting in the following output

```yaml
{
   "screen_name": String,
   "button_text": String,
   "flow": String,
   "event_type": String,
   "custom_properties": { }
}
```

### DefaultScreenViewedEvent

This event has the following attributes:
- `screenName`
- `flow`
- `customProperties`

Resulting in the following output

```yaml
{
   "screen_name": String,
   "flow": String,
   "custom_properties": { }
}
```

### Filtering events by it's type

To filter searches for one of the three main events described above, namely `DefaultAppEvent, DefaultButtonTappedEvent, or DefaultScreenViewedEvent` and view the list of inheritors.



