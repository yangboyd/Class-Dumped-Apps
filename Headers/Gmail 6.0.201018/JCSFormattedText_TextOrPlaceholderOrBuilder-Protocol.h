//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ComGoogleProtobufMessageOrBuilder-Protocol.h"

@class JCSDatePlaceholder, JCSFormattedText_TextOrPlaceholder_Adjective, JCSFormattedText_TextOrPlaceholder_FormattingOptions, JCSPluralPlaceholder, NSString;
@protocol JavaUtilList;

@protocol JCSFormattedText_TextOrPlaceholderOrBuilder <ComGoogleProtobufMessageOrBuilder>
- (JCSFormattedText_TextOrPlaceholder_Adjective *)getAdjectiveWithInt:(int)arg1;
- (id <JavaUtilList>)getAdjectiveList;
- (int)getAdjectiveCount;
- (JCSFormattedText_TextOrPlaceholder_FormattingOptions *)getFormattingOptions;
- (_Bool)hasFormattingOptions;
- (JCSPluralPlaceholder *)getPluralPlaceholder;
- (_Bool)hasPluralPlaceholder;
- (_Bool)getNewLine;
- (_Bool)hasNewLine;
- (JCSDatePlaceholder *)getDatePlaceholder;
- (_Bool)hasDatePlaceholder;
- (NSString *)getText;
- (_Bool)hasText;
@end

