//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FBSharedFramework/IGBusinessSelectionFlowConfiguration-Protocol.h>

@class IGBusinessConversionSelectionGraphQLHelper, IGUserSession, NSString;
@protocol IGBusinessSelectionFlowNoResultsView;

@interface IGBusinessConversionSelectionFlowConfiguration : NSObject <IGBusinessSelectionFlowConfiguration>
{
    _Bool _canSkipItemSelection;
    long long _toAccountType;
    IGBusinessConversionSelectionGraphQLHelper *_graphQLHelper;
    IGUserSession *_userSession;
}

- (void).cxx_destruct;
@property(retain, nonatomic) IGUserSession *userSession; // @synthesize userSession=_userSession;
@property(readonly, nonatomic) IGBusinessConversionSelectionGraphQLHelper *graphQLHelper; // @synthesize graphQLHelper=_graphQLHelper;
@property(readonly, nonatomic) long long toAccountType; // @synthesize toAccountType=_toAccountType;
- (id)selectionTableViewGraphQLQueryID;
@property(readonly, nonatomic) _Bool canSkipItemSelection; // @synthesize canSkipItemSelection=_canSkipItemSelection;
@property(readonly, nonatomic) id <IGBusinessSelectionFlowNoResultsView> noResultsView;
- (id)initWithUserSession:(id)arg1 toAccountType:(long long)arg2 canSkipItemSelection:(_Bool)arg3;
- (id)initWithUserSession:(id)arg1 toAccountType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

