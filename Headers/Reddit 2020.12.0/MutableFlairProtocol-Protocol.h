//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditCore/FlairProtocol-Protocol.h>

@class MutableFlairTemplate, NSArray, NSString;

@protocol MutableFlairProtocol <FlairProtocol>
@property(readonly, nonatomic) MutableFlairTemplate *template;
@property(nonatomic) long long textColorType;
@property(copy, nonatomic) NSArray *richText;
@property(copy, nonatomic) NSString *text;
@property(nonatomic) long long textType;
@end

