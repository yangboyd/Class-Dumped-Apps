//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SKTSendKitUIPhotosService.h"

@class NSString, SKTExperimentFlagsProvider;

@interface SKTSendKitUIServiceImpl : NSObject <SKTSendKitUIPhotosService>
{
    SKTExperimentFlagsProvider *_experimentFlagsProvider;
    id <GSCAccountId> _accountID;
    id <SendKitDeps> _sendKitDeps;
}

@property(readonly, nonatomic) id <SendKitDeps> sendKitDeps; // @synthesize sendKitDeps=_sendKitDeps;
@property(readonly, nonatomic) id <GSCAccountId> accountID; // @synthesize accountID=_accountID;
@property(readonly, nonatomic) SKTExperimentFlagsProvider *experimentFlagsProvider; // @synthesize experimentFlagsProvider=_experimentFlagsProvider;
- (void).cxx_destruct;
- (id)analyticsProviderWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)stringOverrides;
- (void)setStringOverrides:(id)arg1;
- (void)forceUpdateServerDataCache:(int)arg1 callback:(CDUnknownBlockType)arg2;
- (id)warmUpContactsCacheForClientID:(int)arg1 withForceUpdate:(_Bool)arg2;
- (id)warmUpContactsCacheForClientID:(int)arg1;
- (id)inlineAutocompleteViewController:(id)arg1;
- (id)maximizedViewControllerWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)topSuggestionsViewControllerWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)fullScreenViewControllerWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)shareSheetViewControllerWithOptions:(id)arg1 dependencyProvider:(id)arg2;
- (id)shareSheetViewControllerWithOptions:(id)arg1;
- (id)initWithAccountID:(id)arg1 sendKitDeps:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

