//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MSSerializableObject-Protocol.h"

@class MSException, NSMutableArray, NSNumber, NSString;

@interface MSThread : NSObject <MSSerializableObject>
{
    NSNumber *_threadId;
    NSString *_name;
    NSMutableArray *_frames;
    MSException *_exception;
}

@property(retain, nonatomic) MSException *exception; // @synthesize exception=_exception;
@property(retain, nonatomic) NSMutableArray *frames; // @synthesize frames=_frames;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(retain, nonatomic) NSNumber *threadId; // @synthesize threadId=_threadId;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isValid;
- (id)serializeToDictionary;
- (id)init;

@end

