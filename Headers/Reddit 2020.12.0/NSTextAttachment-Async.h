//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

@interface NSTextAttachment (Async)
+ (id)spacerAttachment;
+ (id)textAttachmentWithImageBaselineAligned:(id)arg1 font:(id)arg2;
+ (id)textAttachmentWithNameBaselineAligned:(id)arg1 font:(id)arg2;
+ (id)textAttachmentWithImage:(id)arg1 font:(id)arg2;
+ (id)textAttachmentWithName:(id)arg1 font:(id)arg2;
- (void)loadImageURL:(id)arg1 placeholderImage:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)loadImageURL:(id)arg1 completion:(CDUnknownBlockType)arg2;
@end

