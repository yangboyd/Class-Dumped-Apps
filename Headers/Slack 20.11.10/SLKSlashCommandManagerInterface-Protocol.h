//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, NSMutableArray, NSString, SLKMessageInfo, SLKSlashCommand;
@protocol MessageEncoderProtocol, SLKChannelGenerics;

@protocol SLKSlashCommandManagerInterface
- (void)downloadSlashCommandsMappingWithCompletion:(void (^)(void))arg1;
- (void)loadCachedSlashCommandsMappings;
- (_Bool)handleCommandDM:(NSMutableArray *)arg1 genericChannel:(id <SLKChannelGenerics>)arg2 textEncoder:(id <MessageEncoderProtocol>)arg3 messageInfo:(SLKMessageInfo *)arg4;
- (_Bool)handleCommandMSG:(NSMutableArray *)arg1 genericChannel:(id <SLKChannelGenerics>)arg2 textEncoder:(id <MessageEncoderProtocol>)arg3 messageInfo:(SLKMessageInfo *)arg4;
- (_Bool)handleCommandRemoveAppUser:(NSString *)arg1 channelId:(NSString *)arg2;
- (_Bool)handleCommandInvite:(NSMutableArray *)arg1 genericChannel:(id <SLKChannelGenerics>)arg2 textEncoder:(id <MessageEncoderProtocol>)arg3;
- (_Bool)handleCommandOpen:(NSMutableArray *)arg1;
- (_Bool)handleCommandLeave:(NSMutableArray *)arg1 genericChannel:(id <SLKChannelGenerics>)arg2 completion:(void (^)(NSError *, id <SLKChannelGenerics>))arg3;
- (SLKSlashCommand *)commandForName:(NSString *)arg1;
- (SLKSlashCommand *)commandForKey:(NSString *)arg1;
- (void)updateCommands:(NSArray *)arg1;
- (void)removeCommands:(NSArray *)arg1;
@property(nonatomic, readonly) NSArray *slashCommands;
@end

