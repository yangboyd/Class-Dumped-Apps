//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SGActivityFeedListViewModel.h"

@class SGTabContainerViewModel;

@interface _TtC10SmartGlass25SGClubDetailFeedViewModel : SGActivityFeedListViewModel
{
    // Error parsing type: , name: containerViewModel
    // Error parsing type: , name: activities
    // Error parsing type: , name: continuationToken
    // Error parsing type: , name: shouldShowError
}

- (CDUnknownBlockType).cxx_destruct;
- (id)init;
- (id)createDataContextWithUserActivity:(id)arg1;
- (void)tryFetchMoreData;
- (void)refresh;
- (id)getDataFromDataModel:(_Bool)arg1;
- (id)timelineId;
- (id)timelineType;
- (id)pinOptionText;
- (_Bool)shouldShowPostStatusButton;
- (void)onActivate;
- (_Bool)shouldRegisterForSharePostedNotification;
- (_Bool)shouldRegisterForCurrentUserFriendsActivityFeedUpdates;
- (void)onInitialize;
@property(nonatomic) _Bool shouldShowError; // @synthesize shouldShowError;
@property(nonatomic, retain) SGTabContainerViewModel *containerViewModel; // @synthesize containerViewModel;

@end

