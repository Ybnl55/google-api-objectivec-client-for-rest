// NOTE: This file was generated by the ServiceGenerator.

// ----------------------------------------------------------------------------
// API:
//   Idea Hub API (ideahub/v1alpha)
// Documentation:
//   https://console.cloud.google.com/apis/library/ideahub.googleapis.com

#import "GTLRIdeahubObjects.h"

// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaAvailableLocale
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaAvailableLocale
@dynamic locale, name;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaIdea
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaIdea
@dynamic name, text, topics;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"topics" : [GTLRIdeahub_GoogleSearchIdeahubV1alphaTopic class]
  };
  return map;
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaIdeaState
@dynamic dismissed, name, saved;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaListAvailableLocalesResponse
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaListAvailableLocalesResponse
@dynamic availableLocales, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"availableLocales" : [GTLRIdeahub_GoogleSearchIdeahubV1alphaAvailableLocale class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"availableLocales";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaListIdeasResponse
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaListIdeasResponse
@dynamic ideas, nextPageToken;

+ (NSDictionary<NSString *, Class> *)arrayPropertyToClassMap {
  NSDictionary<NSString *, Class> *map = @{
    @"ideas" : [GTLRIdeahub_GoogleSearchIdeahubV1alphaIdea class]
  };
  return map;
}

+ (NSString *)collectionItemsKey {
  return @"ideas";
}

@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaTopic
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaTopic
@dynamic displayName, mid;
@end


// ----------------------------------------------------------------------------
//
//   GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState
//

@implementation GTLRIdeahub_GoogleSearchIdeahubV1alphaTopicState
@dynamic dismissed, name, saved;
@end