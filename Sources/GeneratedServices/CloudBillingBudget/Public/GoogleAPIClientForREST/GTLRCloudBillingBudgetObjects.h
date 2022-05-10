// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Billing Budget API (billingbudgets/v1)
// Description:
//   The Cloud Billing Budget API stores Cloud Billing budgets, which define a
//   budget plan and the rules to execute as spend is tracked against that plan.
// Documentation:
//   https://cloud.google.com/billing/docs/how-to/budget-api-overview

#import <GoogleAPIClientForREST/GTLRObject.h>

#if GTLR_RUNTIME_VERSION != 3000
#error This file was generated by a different version of ServiceGenerator which is incompatible with this GTLR library source.
#endif

@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Budget;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1BudgetAmount;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1CustomPeriod;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_Labels;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1LastPeriodAmount;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1NotificationsRule;
@class GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule;
@class GTLRCloudBillingBudget_GoogleTypeDate;
@class GTLRCloudBillingBudget_GoogleTypeMoney;

// Generated comments include content from the discovery document; avoid them
// causing warnings since clang's checks are some what arbitrary.
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"

NS_ASSUME_NONNULL_BEGIN

// ----------------------------------------------------------------------------
// Constants - For some of the classes' properties below.

// ----------------------------------------------------------------------------
// GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter.calendarPeriod

/**
 *  Calendar period is unset. This is the default if the budget is for a custom
 *  time period (CustomPeriod).
 *
 *  Value: "CALENDAR_PERIOD_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_CalendarPeriodUnspecified;
/**
 *  A month. Month starts on the first day of each month, such as January 1,
 *  February 1, March 1, and so on.
 *
 *  Value: "MONTH"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Month;
/**
 *  A quarter. Quarters start on dates January 1, April 1, July 1, and October 1
 *  of each year.
 *
 *  Value: "QUARTER"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Quarter;
/**
 *  A year. Year starts on January 1.
 *
 *  Value: "YEAR"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Year;

// ----------------------------------------------------------------------------
// GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter.creditTypesTreatment

/** Value: "CREDIT_TYPES_TREATMENT_UNSPECIFIED" */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_CreditTypesTreatmentUnspecified;
/**
 *  All types of credit are added to the net cost to determine the spend for
 *  threshold calculations.
 *
 *  Value: "EXCLUDE_ALL_CREDITS"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_ExcludeAllCredits;
/**
 *  All types of credit are subtracted from the gross cost to determine the
 *  spend for threshold calculations.
 *
 *  Value: "INCLUDE_ALL_CREDITS"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_IncludeAllCredits;
/**
 *  [Credit
 *  types](https://cloud.google.com/billing/docs/how-to/export-data-bigquery-tables#credits-type)
 *  specified in the credit_types field are subtracted from the gross cost to
 *  determine the spend for threshold calculations.
 *
 *  Value: "INCLUDE_SPECIFIED_CREDITS"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_IncludeSpecifiedCredits;

// ----------------------------------------------------------------------------
// GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule.spendBasis

/**
 *  Unspecified threshold basis.
 *
 *  Value: "BASIS_UNSPECIFIED"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_BasisUnspecified;
/**
 *  Use current spend as the basis for comparison against the threshold.
 *
 *  Value: "CURRENT_SPEND"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_CurrentSpend;
/**
 *  Use forecasted spend for the period as the basis for comparison against the
 *  threshold. FORECASTED_SPEND can only be set when the budget's time period is
 *  a Filter.calendar_period. It cannot be set in combination with
 *  Filter.custom_period.
 *
 *  Value: "FORECASTED_SPEND"
 */
FOUNDATION_EXTERN NSString * const kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_ForecastedSpend;

/**
 *  A budget is a plan that describes what you expect to spend on Cloud
 *  projects, plus the rules to execute as spend is tracked against that plan,
 *  (for example, send an alert when 90% of the target spend is met). The budget
 *  time period is configurable, with options such as month (default), quarter,
 *  year, or custom time period.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Budget : GTLRObject

/** Required. Budgeted amount. */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1BudgetAmount *amount;

/**
 *  Optional. Filters that define which resources are used to compute the actual
 *  spend against the budget amount, such as projects, services, and the
 *  budget's time period, as well as other filters.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter *budgetFilter;

/**
 *  User data for display name in UI. The name must be less than or equal to 60
 *  characters.
 */
@property(nonatomic, copy, nullable) NSString *displayName;

/**
 *  Optional. Etag to validate that the object is unchanged for a
 *  read-modify-write operation. An empty etag causes an update to overwrite
 *  other changes.
 */
@property(nonatomic, copy, nullable) NSString *ETag;

/**
 *  Output only. Resource name of the budget. The resource name implies the
 *  scope of a budget. Values are of the form
 *  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
 */
@property(nonatomic, copy, nullable) NSString *name;

/**
 *  Optional. Rules to apply to notifications sent based on budget spend and
 *  thresholds.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1NotificationsRule *notificationsRule;

/**
 *  Optional. Rules that trigger alerts (notifications of thresholds being
 *  crossed) when spend exceeds the specified percentages of the budget.
 *  Optional for `pubsubTopic` notifications. Required if using email
 *  notifications.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule *> *thresholdRules;

@end


/**
 *  The budgeted amount for each usage period.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1BudgetAmount : GTLRObject

/**
 *  Use the last period's actual spend as the budget for the present period.
 *  LastPeriodAmount can only be set when the budget's time period is a
 *  Filter.calendar_period. It cannot be set in combination with
 *  Filter.custom_period.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1LastPeriodAmount *lastPeriodAmount;

/**
 *  A specified amount to use as the budget. `currency_code` is optional. If
 *  specified when creating a budget, it must match the currency of the billing
 *  account. If specified when updating a budget, it must match the
 *  currency_code of the existing budget. The `currency_code` is provided on
 *  output.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleTypeMoney *specifiedAmount;

@end


/**
 *  All date times begin at 12 AM US and Canadian Pacific Time (UTC-8).
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1CustomPeriod : GTLRObject

/**
 *  Optional. The end date of the time period. Budgets with elapsed end date
 *  won't be processed. If unset, specifies to track all usage incurred since
 *  the start_date.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleTypeDate *endDate;

/** Required. The start date must be after January 1, 2017. */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleTypeDate *startDate;

@end


/**
 *  A filter for a budget, limiting the scope of the cost to calculate.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter : GTLRObject

/**
 *  Optional. Specifies to track usage for recurring calendar period. For
 *  example, assume that CalendarPeriod.QUARTER is set. The budget tracks usage
 *  from April 1 to June 30, when the current calendar month is April, May,
 *  June. After that, it tracks usage from July 1 to September 30 when the
 *  current calendar month is July, August, September, so on.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_CalendarPeriodUnspecified
 *        Calendar period is unset. This is the default if the budget is for a
 *        custom time period (CustomPeriod). (Value:
 *        "CALENDAR_PERIOD_UNSPECIFIED")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Month
 *        A month. Month starts on the first day of each month, such as January
 *        1, February 1, March 1, and so on. (Value: "MONTH")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Quarter
 *        A quarter. Quarters start on dates January 1, April 1, July 1, and
 *        October 1 of each year. (Value: "QUARTER")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CalendarPeriod_Year
 *        A year. Year starts on January 1. (Value: "YEAR")
 */
@property(nonatomic, copy, nullable) NSString *calendarPeriod;

/**
 *  Optional. If Filter.credit_types_treatment is INCLUDE_SPECIFIED_CREDITS,
 *  this is a list of credit types to be subtracted from gross cost to determine
 *  the spend for threshold calculations. See [a list of acceptable credit type
 *  values](https://cloud.google.com/billing/docs/how-to/export-data-bigquery-tables#credits-type).
 *  If Filter.credit_types_treatment is **not** INCLUDE_SPECIFIED_CREDITS, this
 *  field must be empty.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *creditTypes;

/**
 *  Optional. If not set, default behavior is `INCLUDE_ALL_CREDITS`.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_CreditTypesTreatmentUnspecified
 *        Value "CREDIT_TYPES_TREATMENT_UNSPECIFIED"
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_ExcludeAllCredits
 *        All types of credit are added to the net cost to determine the spend
 *        for threshold calculations. (Value: "EXCLUDE_ALL_CREDITS")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_IncludeAllCredits
 *        All types of credit are subtracted from the gross cost to determine
 *        the spend for threshold calculations. (Value: "INCLUDE_ALL_CREDITS")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_CreditTypesTreatment_IncludeSpecifiedCredits
 *        [Credit
 *        types](https://cloud.google.com/billing/docs/how-to/export-data-bigquery-tables#credits-type)
 *        specified in the credit_types field are subtracted from the gross cost
 *        to determine the spend for threshold calculations. (Value:
 *        "INCLUDE_SPECIFIED_CREDITS")
 */
@property(nonatomic, copy, nullable) NSString *creditTypesTreatment;

/**
 *  Optional. Specifies to track usage from any start date (required) to any end
 *  date (optional). This time period is static, it does not recur.
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1CustomPeriod *customPeriod;

/**
 *  Optional. A single label and value pair specifying that usage from only this
 *  set of labeled resources should be included in the budget. If omitted, the
 *  report includes all labeled and unlabeled usage. An object containing a
 *  single `"key": value` pair. Example: `{ "name": "wrench" }`. _Currently,
 *  multiple entries or multiple values per entry are not allowed._
 */
@property(nonatomic, strong, nullable) GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_Labels *labels;

/**
 *  Optional. A set of projects of the form `projects/{project}`, specifying
 *  that usage from only this set of projects should be included in the budget.
 *  If omitted, the report includes all usage for the billing account,
 *  regardless of which project the usage occurred on. Only zero or one project
 *  can be specified currently.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *projects;

/**
 *  Optional. A set of services of the form `services/{service_id}`, specifying
 *  that usage from only this set of services should be included in the budget.
 *  If omitted, the report includes usage for all the services. The service
 *  names are available through the Catalog API:
 *  https://cloud.google.com/billing/v1/how-tos/catalog-api.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *services;

/**
 *  Optional. A set of subaccounts of the form `billingAccounts/{account_id}`,
 *  specifying that usage from only this set of subaccounts should be included
 *  in the budget. If a subaccount is set to the name of the parent account,
 *  usage from the parent account is included. If the field is omitted, the
 *  report includes usage from the parent account and all subaccounts, if they
 *  exist.
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *subaccounts;

@end


/**
 *  Optional. A single label and value pair specifying that usage from only this
 *  set of labeled resources should be included in the budget. If omitted, the
 *  report includes all labeled and unlabeled usage. An object containing a
 *  single `"key": value` pair. Example: `{ "name": "wrench" }`. _Currently,
 *  multiple entries or multiple values per entry are not allowed._
 *
 *  @note This class is documented as having more properties of NSArrays of any
 *        valid JSON type. Use @c -additionalJSONKeys and @c
 *        -additionalPropertyForName: to get the list of properties and then
 *        fetch them; or @c -additionalProperties to fetch them all at once.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Filter_Labels : GTLRObject
@end


/**
 *  Describes a budget amount targeted to the last Filter.calendar_period spend.
 *  At this time, the amount is automatically 100% of the last calendar period's
 *  spend; that is, there are no other options yet. LastPeriodAmount cannot be
 *  set for a budget configured with a Filter.custom_period.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1LastPeriodAmount : GTLRObject
@end


/**
 *  Response for ListBudgets
 *
 *  @note This class supports NSFastEnumeration and indexed subscripting over
 *        its "budgets" property. If returned as the result of a query, it
 *        should support automatic pagination (when @c shouldFetchNextPages is
 *        enabled).
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ListBudgetsResponse : GTLRCollectionObject

/**
 *  List of the budgets owned by the requested billing account.
 *
 *  @note This property is used to support NSFastEnumeration and indexed
 *        subscripting on this class.
 */
@property(nonatomic, strong, nullable) NSArray<GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1Budget *> *budgets;

/**
 *  If not empty, indicates that there may be more budgets that match the
 *  request; this value should be passed in a new `ListBudgetsRequest`.
 */
@property(nonatomic, copy, nullable) NSString *nextPageToken;

@end


/**
 *  NotificationsRule defines notifications that are sent based on budget spend
 *  and thresholds.
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1NotificationsRule : GTLRObject

/**
 *  Optional. When set to true, disables default notifications sent when a
 *  threshold is exceeded. Default notifications are sent to those with Billing
 *  Account Administrator and Billing Account User IAM roles for the target
 *  account.
 *
 *  Uses NSNumber of boolValue.
 */
@property(nonatomic, strong, nullable) NSNumber *disableDefaultIamRecipients;

/**
 *  Optional. Email targets to send notifications to when a threshold is
 *  exceeded. This is in addition to the `DefaultIamRecipients` who receive
 *  alert emails based on their billing account IAM role. The value is the full
 *  REST resource name of a Cloud Monitoring email notification channel with the
 *  form `projects/{project_id}/notificationChannels/{channel_id}`. A maximum of
 *  5 email notifications are allowed. To customize budget alert email
 *  recipients with monitoring notification channels, you _must create the
 *  monitoring notification channels before you link them to a budget_. For
 *  guidance on setting up notification channels to use with budgets, see
 *  [Customize budget alert email
 *  recipients](https://cloud.google.com/billing/docs/how-to/budgets-notification-recipients).
 *  For Cloud Billing budget alerts, you _must use email notification channels_.
 *  The other types of notification channels are _not_ supported, such as Slack,
 *  SMS, or PagerDuty. If you want to [send budget notifications to
 *  Slack](https://cloud.google.com/billing/docs/how-to/notify#send_notifications_to_slack),
 *  use a pubsubTopic and configure [programmatic
 *  notifications](https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications).
 */
@property(nonatomic, strong, nullable) NSArray<NSString *> *monitoringNotificationChannels;

/**
 *  Optional. The name of the Pub/Sub topic where budget-related messages are
 *  published, in the form `projects/{project_id}/topics/{topic_id}`. Updates
 *  are sent to the topic at regular intervals; the timing of the updates is not
 *  dependent on the [threshold rules](#thresholdrule) you've set. Note that if
 *  you want your [Pub/Sub JSON
 *  object](https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications#notification_format)
 *  to contain data for `alertThresholdExceeded`, you need at least one [alert
 *  threshold rule](#thresholdrule). When you set threshold rules, you must also
 *  enable at least one of the email notification options, either using the
 *  default IAM recipients or Cloud Monitoring email notification channels. To
 *  use Pub/Sub topics with budgets, you must do the following: 1. Create the
 *  Pub/Sub topic before connecting it to your budget. For guidance, see [Manage
 *  programmatic budget alert
 *  notifications](https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications).
 *  2. Grant the API caller the `pubsub.topics.setIamPolicy` permission on the
 *  Pub/Sub topic. If not set, the API call fails with PERMISSION_DENIED. For
 *  additional details on Pub/Sub roles and permissions, see [Permissions
 *  required for this
 *  task](https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications#permissions_required_for_this_task).
 */
@property(nonatomic, copy, nullable) NSString *pubsubTopic;

/**
 *  Optional. Required when NotificationsRule.pubsub_topic is set. The schema
 *  version of the notification sent to NotificationsRule.pubsub_topic. Only
 *  "1.0" is accepted. It represents the JSON schema as defined in
 *  https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications#notification_format.
 */
@property(nonatomic, copy, nullable) NSString *schemaVersion;

@end


/**
 *  ThresholdRule contains the definition of a threshold. Threshold rules define
 *  the triggering events used to generate a budget notification email. When a
 *  threshold is crossed (spend exceeds the specified percentages of the
 *  budget), budget alert emails are sent to the email recipients you specify in
 *  the [NotificationsRule](#notificationsrule). Threshold rules also affect the
 *  fields included in the [JSON data
 *  object](https://cloud.google.com/billing/docs/how-to/budgets-programmatic-notifications#notification_format)
 *  sent to a Pub/Sub topic. Threshold rules are _required_ if using email
 *  notifications. Threshold rules are _optional_ if only setting a
 *  [`pubsubTopic` NotificationsRule](#NotificationsRule), unless you want your
 *  JSON data object to include data about the thresholds you set. For more
 *  information, see [set budget threshold rules and
 *  actions](https://cloud.google.com/billing/docs/how-to/budgets#budget-actions).
 */
@interface GTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule : GTLRObject

/**
 *  Optional. The type of basis used to determine if spend has passed the
 *  threshold. Behavior defaults to CURRENT_SPEND if not set.
 *
 *  Likely values:
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_BasisUnspecified
 *        Unspecified threshold basis. (Value: "BASIS_UNSPECIFIED")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_CurrentSpend
 *        Use current spend as the basis for comparison against the threshold.
 *        (Value: "CURRENT_SPEND")
 *    @arg @c kGTLRCloudBillingBudget_GoogleCloudBillingBudgetsV1ThresholdRule_SpendBasis_ForecastedSpend
 *        Use forecasted spend for the period as the basis for comparison
 *        against the threshold. FORECASTED_SPEND can only be set when the
 *        budget's time period is a Filter.calendar_period. It cannot be set in
 *        combination with Filter.custom_period. (Value: "FORECASTED_SPEND")
 */
@property(nonatomic, copy, nullable) NSString *spendBasis;

/**
 *  Required. Send an alert when this threshold is exceeded. This is a 1.0-based
 *  percentage, so 0.5 = 50%. Validation: non-negative number.
 *
 *  Uses NSNumber of doubleValue.
 */
@property(nonatomic, strong, nullable) NSNumber *thresholdPercent;

@end


/**
 *  A generic empty message that you can re-use to avoid defining duplicated
 *  empty messages in your APIs. A typical example is to use it as the request
 *  or the response type of an API method. For instance: service Foo { rpc
 *  Bar(google.protobuf.Empty) returns (google.protobuf.Empty); }
 */
@interface GTLRCloudBillingBudget_GoogleProtobufEmpty : GTLRObject
@end


/**
 *  Represents a whole or partial calendar date, such as a birthday. The time of
 *  day and time zone are either specified elsewhere or are insignificant. The
 *  date is relative to the Gregorian Calendar. This can represent one of the
 *  following: * A full date, with non-zero year, month, and day values. * A
 *  month and day, with a zero year (for example, an anniversary). * A year on
 *  its own, with a zero month and a zero day. * A year and month, with a zero
 *  day (for example, a credit card expiration date). Related types: *
 *  google.type.TimeOfDay * google.type.DateTime * google.protobuf.Timestamp
 */
@interface GTLRCloudBillingBudget_GoogleTypeDate : GTLRObject

/**
 *  Day of a month. Must be from 1 to 31 and valid for the year and month, or 0
 *  to specify a year by itself or a year and month where the day isn't
 *  significant.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *day;

/**
 *  Month of a year. Must be from 1 to 12, or 0 to specify a year without a
 *  month and day.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *month;

/**
 *  Year of the date. Must be from 1 to 9999, or 0 to specify a date without a
 *  year.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *year;

@end


/**
 *  Represents an amount of money with its currency type.
 */
@interface GTLRCloudBillingBudget_GoogleTypeMoney : GTLRObject

/** The three-letter currency code defined in ISO 4217. */
@property(nonatomic, copy, nullable) NSString *currencyCode;

/**
 *  Number of nano (10^-9) units of the amount. The value must be between
 *  -999,999,999 and +999,999,999 inclusive. If `units` is positive, `nanos`
 *  must be positive or zero. If `units` is zero, `nanos` can be positive, zero,
 *  or negative. If `units` is negative, `nanos` must be negative or zero. For
 *  example $-1.75 is represented as `units`=-1 and `nanos`=-750,000,000.
 *
 *  Uses NSNumber of intValue.
 */
@property(nonatomic, strong, nullable) NSNumber *nanos;

/**
 *  The whole units of the amount. For example if `currencyCode` is `"USD"`,
 *  then 1 unit is one US dollar.
 *
 *  Uses NSNumber of longLongValue.
 */
@property(nonatomic, strong, nullable) NSNumber *units;

@end

NS_ASSUME_NONNULL_END

#pragma clang diagnostic pop