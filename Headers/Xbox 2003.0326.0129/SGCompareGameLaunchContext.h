//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class XBXTitle, XBXUser;

@interface SGCompareGameLaunchContext : NSObject <NSCoding>
{
    XBXTitle *_title;
    XBXUser *_primaryUser;
    XBXUser *_secondaryUser;
}

@property(retain, nonatomic) XBXUser *secondaryUser; // @synthesize secondaryUser=_secondaryUser;
@property(retain, nonatomic) XBXUser *primaryUser; // @synthesize primaryUser=_primaryUser;
@property(retain, nonatomic) XBXTitle *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)initWithTitle:(id)arg1 primaryUser:(id)arg2 secondaryUser:(id)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

