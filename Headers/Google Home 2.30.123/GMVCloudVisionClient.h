//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GTMSessionFetcherService, NSLock, NSMutableSet, NSString;
@protocol GMVCloudVisionClientDataDelegate;

@interface GMVCloudVisionClient : NSObject
{
    id <GMVCloudVisionClientDataDelegate> _delegate;
    GTMSessionFetcherService *_fetchService;
    double _connectionTimeoutInterval;
    NSString *_apiKey;
    NSString *_cloudEndpoint;
    NSString *_productCatalogName;
    long long _productResultView;
    unsigned long long _maxFeatureRequestCount;
    NSMutableSet *_searchingFeatures;
    NSLock *_searchingFeaturesLock;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *searchingFeaturesLock; // @synthesize searchingFeaturesLock=_searchingFeaturesLock;
@property(retain, nonatomic) NSMutableSet *searchingFeatures; // @synthesize searchingFeatures=_searchingFeatures;
@property(nonatomic) unsigned long long maxFeatureRequestCount; // @synthesize maxFeatureRequestCount=_maxFeatureRequestCount;
@property(nonatomic) long long productResultView; // @synthesize productResultView=_productResultView;
@property(copy, nonatomic) NSString *productCatalogName; // @synthesize productCatalogName=_productCatalogName;
@property(copy, nonatomic) NSString *cloudEndpoint; // @synthesize cloudEndpoint=_cloudEndpoint;
@property(copy, nonatomic) NSString *apiKey; // @synthesize apiKey=_apiKey;
@property(nonatomic) double connectionTimeoutInterval; // @synthesize connectionTimeoutInterval=_connectionTimeoutInterval;
@property(retain, nonatomic) GTMSessionFetcherService *fetchService; // @synthesize fetchService=_fetchService;
@property(nonatomic) __weak id <GMVCloudVisionClientDataDelegate> delegate; // @synthesize delegate=_delegate;
- (id)constructAnnotateImageRequestFeatures:(id)arg1;
- (id)constructProductImageContext:(id)arg1;
- (id)constructImageContext:(id)arg1 imageSize:(struct CGSize)arg2;
- (id)constructAnnotateImageRequest:(id)arg1 withFeature:(id)arg2;
- (id)constructRequestBody:(id)arg1 withFeatures:(id)arg2;
- (id)constructFetcher:(id)arg1 withError:(id *)arg2;
- (void)setFeaturesSearchingProgress:(id)arg1 inProgress:(_Bool)arg2;
- (_Bool)isFeatureSearchingInProgress:(id)arg1;
- (id)parseResponseData:(id)arg1 withRequestFeature:(id)arg2 parseError:(id *)arg3;
- (id)syncRetrieved:(id)arg1 forPreferences:(id)arg2 forImages:(id)arg3 error:(id *)arg4;
- (void)asyncRetrieved:(id)arg1 forPreferences:(id)arg2 forImages:(id)arg3;
- (_Bool)hasCloudAccess;
- (id)initWithCloudUri:(id)arg1 apiKey:(id)arg2 options:(id)arg3;

@end

