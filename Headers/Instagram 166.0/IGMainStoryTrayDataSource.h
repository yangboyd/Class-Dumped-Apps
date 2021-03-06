//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InstagramAppCoreFramework/IGStoryTrayDataSource-Protocol.h>
#import <InstagramAppCoreFramework/IGStoryTrayLoggingContextDataSource-Protocol.h>

@class IGUserSession, NSArray, NSString;

@interface IGMainStoryTrayDataSource : NSObject <IGStoryTrayDataSource, IGStoryTrayLoggingContextDataSource>
{
    _Bool _showTrending;
    NSArray *_trayViewModels;
    IGUserSession *_userSession;
}

+ (id)_currentUserViewModelWithType:(long long)arg1 fromViewModels:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (id)storyTrayViewModelsForLoggingContext;
- (void)invertTrending;
- (id)viewModelForLiveBroadcast:(id)arg1;
- (id)viewModelForReel:(id)arg1;
@property(readonly, nonatomic) _Bool trayShouldScrollToEndOnDismiss;
@property(readonly, nonatomic) _Bool isEmpty;
- (id)allItemsForTray;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

