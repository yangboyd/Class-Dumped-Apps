//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TtC21PodcastDALFeatureImpl17PodcastDALService : NSObject
{
    // Error parsing type: , name: _cosmosService
    // Error parsing type: , name: _sessionService
    // Error parsing type: , name: _remoteConfigurationService
    // Error parsing type: , name: $__lazy_storage_$_resolver
    // Error parsing type: , name: $__lazy_storage_$_featureProperties
}

+ (id)serviceIdentifier;
- (void).cxx_destruct;
- (id)init;
- (id)provideProtobufPodcastRequestFactory;
- (id)providePodcastRequestFactory;
- (id)provideDataLoaderWithCallbackDispatchQueue:(id)arg1;
- (id)provideDataLoader;
- (id)provideProtobufPodcastEntityDataLoader;
- (id)providePodcastEntityDataLoaderWithCallbackDispatchQueue:(id)arg1;
- (id)providePodcastEntityDataLoader;
- (id)provideSortingProvider;
- (id)providePodcastEpisodeProtobufFactory;
- (id)providePodcastEpisodeFactory;
- (id)providePodcastProtobufFactory;
- (id)providePodcastFactory;

@end

