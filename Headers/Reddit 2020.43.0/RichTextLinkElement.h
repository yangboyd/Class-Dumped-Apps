//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface RichTextLinkElement : NSObject
{
    // Error parsing type: , name: text
    // Error parsing type: , name: alternativeText
    // Error parsing type: , name: url
    // Error parsing type: , name: formatting
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic, readonly) long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(void *)arg1;
@property(nonatomic, readonly) NSString *previewText;
- (id)attributedStringWithConfig:(id)arg1;
- (id)initWithData:(id)arg1 media:(id)arg2;
- (id)initWithText:(id)arg1 alternativeText:(id)arg2 url:(id)arg3 formatting:(id)arg4;
@property(nonatomic, readonly) NSArray *formatting;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) NSString *alternativeText;
@property(nonatomic, readonly) NSString *text;

@end

