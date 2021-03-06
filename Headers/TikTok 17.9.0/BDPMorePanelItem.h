//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL, UIImage;

@interface BDPMorePanelItem : NSObject
{
    NSString *_name;
    UIImage *_icon;
    NSURL *_iconURL;
    long long _type;
    CDUnknownBlockType _action;
}

+ (id)itemWithName:(id)arg1 iconURL:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)itemWithName:(id)arg1 icon:(id)arg2 action:(CDUnknownBlockType)arg3;
+ (id)itemWithType:(long long)arg1 name:(id)arg2 icon:(id)arg3 action:(CDUnknownBlockType)arg4;
@property(copy, nonatomic) CDUnknownBlockType action; // @synthesize action=_action;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSURL *iconURL; // @synthesize iconURL=_iconURL;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)updateAction:(CDUnknownBlockType)arg1;
- (id)initWithType:(long long)arg1 name:(id)arg2 icon:(id)arg3 iconURL:(id)arg4 action:(CDUnknownBlockType)arg5;
@property(nonatomic) long long priority;
@property(readonly, nonatomic) _Bool canHidden;

@end

