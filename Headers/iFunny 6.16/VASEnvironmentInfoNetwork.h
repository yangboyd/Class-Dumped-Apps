//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTCarrier, NSString;

@interface VASEnvironmentInfoNetwork : NSObject
{
    NSString *_connectionType;
    NSString *_radioAccessTechnology;
    CTCarrier *_carrier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CTCarrier *carrier; // @synthesize carrier=_carrier;
@property(retain, nonatomic) NSString *radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(retain, nonatomic) NSString *connectionType; // @synthesize connectionType=_connectionType;
- (id)initWithConnectionType:(id)arg1 telephonyInfo:(id)arg2;

@end

