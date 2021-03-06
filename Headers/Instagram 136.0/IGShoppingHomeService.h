//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGShoppingFeedNetworkFetchState, IGShoppingFeedNetworker, IGShoppingHomeConfiguration, IGShoppingHomeDataModel, IGUserSession;
@protocol IGShoppingHomeServiceDelegate;

@interface IGShoppingHomeService : NSObject
{
    IGUserSession *_userSession;
    IGShoppingHomeConfiguration *_configuration;
    IGShoppingFeedNetworker *_networker;
    IGShoppingHomeDataModel *_dataModel;
    id <IGShoppingHomeServiceDelegate> _delegate;
}

@property(nonatomic) __weak id <IGShoppingHomeServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) IGShoppingHomeDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)_networkResponseLoaded:(id)arg1 requestConfiguration:(id)arg2;
- (void)_parseSaveStatusesFromReponse:(id)arg1;
- (void)updateDataModel:(id)arg1;
- (void)requestFeedWithAction:(long long)arg1 isPullToRefresh:(_Bool)arg2;
@property(readonly, copy, nonatomic) IGShoppingFeedNetworkFetchState *fetchState;
- (id)initWithUserSession:(id)arg1 configuration:(id)arg2;

@end

