// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Eventarc API (eventarc/v1)
// Description:
//   Build event-driven applications on Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/eventarc

#import <GoogleAPIClientForREST/GTLREventarc.h>

// ----------------------------------------------------------------------------
// Authorization scope

NSString * const kGTLRAuthScopeEventarcCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLREventarcService
//

@implementation GTLREventarcService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://eventarc.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end