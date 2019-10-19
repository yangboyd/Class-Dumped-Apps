//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MSModel.h"
#import "MSSerializableObject.h"

@class NSString, NSUUID;

@interface MSSDKExtension : NSObject <MSSerializableObject, MSModel>
{
    NSString *_libVer;
    NSString *_epoch;
    long long _seq;
    NSUUID *_installId;
}

@property(retain, nonatomic) NSUUID *installId; // @synthesize installId=_installId;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
@property(copy, nonatomic) NSString *epoch; // @synthesize epoch=_epoch;
@property(copy, nonatomic) NSString *libVer; // @synthesize libVer=_libVer;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (id)serializeToDictionary;

@end

