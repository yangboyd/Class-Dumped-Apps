//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Funny/IFNetworkResponseMappable-Protocol.h>

@class NSNumber, NSString;

@interface FNRONickAvailable : NSObject <IFNetworkResponseMappable>
{
    _Bool _available;
    NSNumber *_status;
    NSString *_nick;
}

+ (id)objectMapping;
- (void).cxx_destruct;
@property(nonatomic) _Bool available; // @synthesize available=_available;
@property(retain, nonatomic) NSString *nick; // @synthesize nick=_nick;
@property(retain, nonatomic) NSNumber *status; // @synthesize status=_status;

@end

