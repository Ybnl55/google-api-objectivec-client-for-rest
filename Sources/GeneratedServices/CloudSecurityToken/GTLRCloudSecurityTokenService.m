// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Security Token Service API (sts/v1)
// Description:
//   The Security Token Service exchanges Google or third-party credentials for
//   a short-lived access token to Google Cloud resources.
// Documentation:
//   http://cloud.google.com/iam/docs/workload-identity-federation

#import <GoogleAPIClientForREST/GTLRCloudSecurityToken.h>

@implementation GTLRCloudSecurityTokenService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://sts.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end