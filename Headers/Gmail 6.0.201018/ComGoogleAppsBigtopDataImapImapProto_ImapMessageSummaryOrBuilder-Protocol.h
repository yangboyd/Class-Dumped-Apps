//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataImapImapProto_ImapFolder, ComGoogleAppsBigtopDataImapImapProto_ImapMessageBodyPart, ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageHeaders, NSString;
@protocol ComGoogleProtobufProtocolStringList;

@protocol ComGoogleAppsBigtopDataImapImapProto_ImapMessageSummaryOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (NSString *)getMessageSnippet;
- (_Bool)hasMessageSnippet;
- (ComGoogleAppsBigtopDataImapImapProto_ImapMessageBodyPart *)getBodyStructure;
- (_Bool)hasBodyStructure;
- (NSString *)getFlagWithInt:(int)arg1;
- (id <ComGoogleProtobufProtocolStringList>)getFlagList;
- (int)getFlagCount;
- (ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageHeaders *)getMessageHeaders;
- (_Bool)hasMessageHeaders;
- (ComGoogleAppsBigtopDataImapImapProto_ImapFolder *)getFolder;
- (_Bool)hasFolder;
- (long long)getUid;
- (_Bool)hasUid;
- (NSString *)getPermanentLocalId;
- (_Bool)hasPermanentLocalId;
@end

