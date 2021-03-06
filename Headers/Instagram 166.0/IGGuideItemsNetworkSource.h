//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGGuide, IGUserSession, NSArray, NSString;
@protocol IGGuideItemsNetworkSourceDelegate, IGRequestToken;

@interface IGGuideItemsNetworkSource : NSObject
{
    IGUserSession *_userSession;
    id <IGRequestToken> _requestToken;
    NSString *_nextMaxId;
    _Bool _hasFetchedOnce;
    _Bool _failed;
    id <IGGuideItemsNetworkSourceDelegate> _delegate;
    IGGuide *_guide;
    NSArray *_items;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool failed; // @synthesize failed=_failed;
@property(readonly, nonatomic) _Bool hasFetchedOnce; // @synthesize hasFetchedOnce=_hasFetchedOnce;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) IGGuide *guide; // @synthesize guide=_guide;
@property(nonatomic) __weak id <IGGuideItemsNetworkSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_updateFetchStateAndAnnouceWithSuccess:(_Bool)arg1;
- (void)_handleFetchFailure;
- (void)_handleSuccessfulLoadMore:(id)arg1;
- (void)_handleSuccessfulInitialFetch:(id)arg1;
- (_Bool)canLoadMore;
@property(readonly, nonatomic) _Bool loading;
- (void)fetchIfNeeded;
- (id)initWithUserSession:(id)arg1 guide:(id)arg2 initialItemsResponse:(id)arg3;

@end

