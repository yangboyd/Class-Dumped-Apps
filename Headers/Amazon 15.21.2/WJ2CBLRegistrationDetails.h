//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WJ2CBLRegistrationDetails : NSObject
{
    int _HTTPCode;
    long long _state;
    NSString *_message;
    NSString *_stateDescription;
}

+ (id)toString:(long long)arg1;
@property(retain, nonatomic) NSString *stateDescription; // @synthesize stateDescription=_stateDescription;
@property(nonatomic) int HTTPCode; // @synthesize HTTPCode=_HTTPCode;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;

@end

