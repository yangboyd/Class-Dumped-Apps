//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DYNSDataUiInvitedGroupSummariesConverter;
@protocol DYNSNetworkApiRequestManager, JavaxInjectProvider;

@interface DYNSActionsGetInvitedRoomsAction : NSObject
{
    id <JavaxInjectProvider> executorProvider_;
    id <DYNSNetworkApiRequestManager> requestManager_;
    DYNSDataUiInvitedGroupSummariesConverter *uiInvitedGroupSummariesConverter_;
}

- (void)dealloc;
- (id)execute;

@end

