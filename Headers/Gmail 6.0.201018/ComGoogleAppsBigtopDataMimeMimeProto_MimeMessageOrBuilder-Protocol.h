//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageAttachment, ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageBody, ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageHeaders;
@protocol JavaUtilList;

@protocol ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageAttachment *)getMessageAttachmentsWithInt:(int)arg1;
- (id <JavaUtilList>)getMessageAttachmentsList;
- (int)getMessageAttachmentsCount;
- (ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageBody *)getMessageBody;
- (_Bool)hasMessageBody;
- (ComGoogleAppsBigtopDataMimeMimeProto_MimeMessageHeaders *)getMessageHeaders;
- (_Bool)hasMessageHeaders;
@end

