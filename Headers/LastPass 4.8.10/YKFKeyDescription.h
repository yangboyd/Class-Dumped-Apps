//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YKFKeyDescription : NSObject
{
    NSString *_manufacturer;
    NSString *_name;
    NSString *_modelNumber;
    NSString *_serialNumber;
    NSString *_firmwareRevision;
    NSString *_hardwareRevision;
}

@property(retain, nonatomic) NSString *hardwareRevision; // @synthesize hardwareRevision=_hardwareRevision;
@property(retain, nonatomic) NSString *firmwareRevision; // @synthesize firmwareRevision=_firmwareRevision;
@property(retain, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(retain, nonatomic) NSString *modelNumber; // @synthesize modelNumber=_modelNumber;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSString *manufacturer; // @synthesize manufacturer=_manufacturer;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)arg1;

@end

