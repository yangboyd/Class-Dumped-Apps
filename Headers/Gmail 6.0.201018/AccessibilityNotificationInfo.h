//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIView;

@interface AccessibilityNotificationInfo : NSObject
{
    unsigned int _type;
    UIView *_target;
    NSString *_message;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(retain, nonatomic) UIView *target; // @synthesize target=_target;
@property(nonatomic) unsigned int type; // @synthesize type=_type;

@end

