//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FVRPromoAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    CDUnknownBlockType _handler;
}

+ (id)actionWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithTitle:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

