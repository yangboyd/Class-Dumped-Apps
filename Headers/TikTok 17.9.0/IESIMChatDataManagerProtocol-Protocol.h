//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESIMChatDataManagerConfig, NSString;
@protocol IESIMChatDataManagerDataSource, IESIMChatDataManagerDelegate, IESIMConversationFilterProtocol, IESIMConversationProtocol, IESIMLoginManagerProtocol;

@protocol IESIMChatDataManagerProtocol <NSObject>
@property(nonatomic) _Bool hasMore;
@property(nonatomic) __weak id <IESIMChatDataManagerDataSource> dataSource;
@property(retain, nonatomic) IESIMChatDataManagerConfig *config;
@property(retain, nonatomic) id <IESIMConversationFilterProtocol> conversationFilter;
@property(retain, nonatomic) id <IESIMLoginManagerProtocol> loginManager;
- (void)fetchJoinedConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 sortType:(long long)arg4 completion:(void (^)(NSArray *, NSError *, long long, _Bool))arg5;
- (void)fetchCreateConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 sortType:(long long)arg4 completion:(void (^)(NSArray *, NSError *, long long, _Bool))arg5;
- (void)fetchAllConversationsInInbox:(int)arg1 cursor:(long long)arg2 conversationType:(unsigned long long)arg3 completion:(void (^)(NSArray *, NSError *, long long, _Bool))arg4;
- (long long)chatCount;
- (id <IESIMConversationProtocol>)chatForIdentifier:(NSString *)arg1;
- (void)removeDelegate:(id <IESIMChatDataManagerDelegate>)arg1;
- (void)addDelegate:(id <IESIMChatDataManagerDelegate>)arg1;
- (void)deleteConversation:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)clear;
- (void)loadRemainSessionsWithCompletion:(void (^)(_Bool))arg1;
- (void)loadSessions;
- (void)setupWithConfig:(IESIMChatDataManagerConfig *)arg1;
@end

