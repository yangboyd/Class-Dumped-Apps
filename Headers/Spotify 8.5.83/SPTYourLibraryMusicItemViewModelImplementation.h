//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTYourLibraryMusicItemViewModel-Protocol.h"

@class NSString, NSURL;
@protocol SPTYourLibraryMusicTestManager;

@interface SPTYourLibraryMusicItemViewModelImplementation : NSObject <SPTYourLibraryMusicItemViewModel>
{
    _Bool _inCollection;
    _Bool _showCollectionQuickActions;
    _Bool showOverlayMask;
    _Bool showDecorationOverlay;
    _Bool folder;
    _Bool _enabled;
    _Bool _quickActionsEnabled;
    _Bool _onDemand;
    NSURL *_imageURL;
    NSString *_title;
    id <SPTYourLibraryMusicTestManager> _testManager;
    unsigned long long _type;
    NSURL *_URL;
    NSString *_subtitle;
    long long _offlineStatus;
}

+ (long long)offlineSyncStatusForSPTOfflineAvailability:(unsigned long long)arg1;
- (void).cxx_destruct;
@property(nonatomic) long long offlineStatus; // @synthesize offlineStatus=_offlineStatus;
@property(nonatomic) _Bool onDemand; // @synthesize onDemand=_onDemand;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) id <SPTYourLibraryMusicTestManager> testManager; // @synthesize testManager=_testManager;
@property(readonly, nonatomic, getter=isQuickActionsEnabled) _Bool quickActionsEnabled; // @synthesize quickActionsEnabled=_quickActionsEnabled;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic, getter=isFolder) _Bool folder; // @synthesize folder;
@property(readonly, nonatomic) _Bool showDecorationOverlay; // @synthesize showDecorationOverlay;
@property(readonly, nonatomic) _Bool showOverlayMask; // @synthesize showOverlayMask;
@property(readonly, nonatomic) _Bool showCollectionQuickActions; // @synthesize showCollectionQuickActions=_showCollectionQuickActions;
@property(readonly, nonatomic) NSURL *imageURL; // @synthesize imageURL=_imageURL;
@property(readonly, nonatomic) _Bool inCollection; // @synthesize inCollection=_inCollection;
@property(readonly, nonatomic, getter=isOfflineAvailable) _Bool offlineAvailable;
@property(readonly, nonatomic, getter=isShuffle) _Bool isShuffle;
@property(readonly, nonatomic) long long icon;
- (id)initWithItemModelEntity:(id)arg1 testManager:(id)arg2 enabledForPlayback:(_Bool)arg3;
- (id)initWithEntityType:(unsigned long long)arg1 enabledForPlayback:(_Bool)arg2 testManager:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

