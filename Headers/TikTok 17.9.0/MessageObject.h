//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MessageObject : NSObject
{
    unsigned int _msgid;
    long long _arg1;
    long long _arg2;
    NSString *_arg3;
}

@property(retain, nonatomic) NSString *arg3; // @synthesize arg3=_arg3;
@property long long arg2; // @synthesize arg2=_arg2;
@property long long arg1; // @synthesize arg1=_arg1;
@property unsigned int msgid; // @synthesize msgid=_msgid;
- (void).cxx_destruct;

@end

