//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSString;

@protocol SCCheetahSendToPreviewViewModel <NSObject, NSCoding, NSCopying>
@property(readonly, nonatomic) double mediaViewAspectRatio;
@property(readonly, nonatomic) _Bool shouldPadMediaView;
@property(readonly, copy, nonatomic) NSString *chatMessage;
@property(readonly, copy, nonatomic) NSString *subTitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) long long viewStyle;
@end

