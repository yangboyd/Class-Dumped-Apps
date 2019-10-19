//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BackgroundFetchOperation.h"

#import "BackgroundFetchImageDownloaderDelegateProtocol-Protocol.h"

@class BackgroundFetchImageDownloader, DataBrokerObjectContext, NSString;

@interface BackgroundFetchLolomoOperation : BackgroundFetchOperation <BackgroundFetchImageDownloaderDelegateProtocol>
{
    BackgroundFetchImageDownloader *_artDownloader;
    DataBrokerObjectContext *_objectContext;
}

@property(retain, nonatomic) DataBrokerObjectContext *objectContext; // @synthesize objectContext=_objectContext;
@property(retain, nonatomic) BackgroundFetchImageDownloader *artDownloader; // @synthesize artDownloader=_artDownloader;
- (void).cxx_destruct;
- (void)finishBackgroundFetch;
- (void)backGroundFetchDownloaderCompletedOrOutOfTime;
- (void)downloadLolomoImageBatch:(id)arg1;
- (void)beginBackgroundFetch;
- (id)initWithObjectContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

