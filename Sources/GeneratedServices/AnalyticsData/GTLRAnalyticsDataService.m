// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Google Analytics Data API (analyticsdata/v1beta)
// Description:
//   Accesses report data in Google Analytics.
// Documentation:
//   https://developers.google.com/analytics/devguides/reporting/data/v1/

#import <GoogleAPIClientForREST/GTLRAnalyticsData.h>

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeAnalyticsDataAnalytics         = @"https://www.googleapis.com/auth/analytics";
NSString * const kGTLRAuthScopeAnalyticsDataAnalyticsReadonly = @"https://www.googleapis.com/auth/analytics.readonly";

// ----------------------------------------------------------------------------
//   GTLRAnalyticsDataService
//

@implementation GTLRAnalyticsDataService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://analyticsdata.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end