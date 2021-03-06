//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@protocol AWEIMEmoticonModelProtocol <NSObject>
@property(copy, nonatomic) NSString *static_uri;
@property(copy, nonatomic) NSString *animate_uri;
@property(copy, nonatomic) NSDictionary *display_name_lang;
@property(retain, nonatomic) NSString *animate_type;
@property(retain, nonatomic) NSString *static_type;
@property(copy, nonatomic) NSString *static_url;
@property(copy, nonatomic) NSString *animate_url;
@property(copy, nonatomic) NSString *display_name;
@property(retain, nonatomic) NSNumber *height;
@property(retain, nonatomic) NSNumber *width;
@property(retain, nonatomic) NSNumber *identifier;
@property(nonatomic) _Bool hide;
@property(copy, nonatomic) NSString *emoticonTitle;
@property(copy, nonatomic) NSString *emoticonIcon;
@end

