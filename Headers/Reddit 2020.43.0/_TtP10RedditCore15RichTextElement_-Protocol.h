//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/NSCopying-Protocol.h>
#import <RedditCore/NSObject-Protocol.h>

@class NSArray, NSAttributedString, NSDictionary, NSString, RichTextConfig;

@protocol _TtP10RedditCore15RichTextElement_ <NSObject, NSCopying>
@property(nonatomic, readonly) NSString *previewText;
- (NSAttributedString *)attributedStringWithConfig:(RichTextConfig *)arg1;
- (id)initWithData:(NSDictionary *)arg1 media:(NSArray *)arg2;
@end

