// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud Monitoring API (monitoring/v3)
// Description:
//   Manages your Cloud Monitoring data and configurations.
// Documentation:
//   https://cloud.google.com/monitoring/api/

#import <GoogleAPIClientForREST/GTLRMonitoring.h>

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeMonitoring              = @"https://www.googleapis.com/auth/monitoring";
NSString * const kGTLRAuthScopeMonitoringCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";
NSString * const kGTLRAuthScopeMonitoringRead          = @"https://www.googleapis.com/auth/monitoring.read";
NSString * const kGTLRAuthScopeMonitoringWrite         = @"https://www.googleapis.com/auth/monitoring.write";

// ----------------------------------------------------------------------------
//   GTLRMonitoringService
//

@implementation GTLRMonitoringService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://monitoring.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end