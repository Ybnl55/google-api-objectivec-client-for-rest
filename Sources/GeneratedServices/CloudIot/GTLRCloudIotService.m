// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Cloud IoT API (cloudiot/v1)
// Description:
//   Registers and manages IoT (Internet of Things) devices that connect to the
//   Google Cloud Platform.
// Documentation:
//   https://cloud.google.com/iot

#import <GoogleAPIClientForREST/GTLRCloudIot.h>

// ----------------------------------------------------------------------------
// Authorization scopes

NSString * const kGTLRAuthScopeCloudIot              = @"https://www.googleapis.com/auth/cloudiot";
NSString * const kGTLRAuthScopeCloudIotCloudPlatform = @"https://www.googleapis.com/auth/cloud-platform";

// ----------------------------------------------------------------------------
//   GTLRCloudIotService
//

@implementation GTLRCloudIotService

- (instancetype)init {
  self = [super init];
  if (self) {
    // From discovery.
    self.rootURLString = @"https://cloudiot.googleapis.com/";
    self.batchPath = @"batch";
    self.prettyPrintQueryParameterNames = @[ @"prettyPrint" ];
  }
  return self;
}

@end