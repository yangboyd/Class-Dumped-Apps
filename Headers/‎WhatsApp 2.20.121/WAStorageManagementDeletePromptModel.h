//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WAStorageManagementDeletePromptModel : NSObject
{
    // Error parsing type: , name: type
    // Error parsing type: , name: firstOptionMessages
    // Error parsing type: , name: firstOptionDeleteSize
    // Error parsing type: , name: secondOptionMessages
    // Error parsing type: , name: secondOptionDeleteSize
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) unsigned long long secondOptionDeleteSize; // @synthesize secondOptionDeleteSize;
@property(nonatomic, copy) NSArray *secondOptionMessages;
@property(nonatomic) unsigned long long firstOptionDeleteSize; // @synthesize firstOptionDeleteSize;
@property(nonatomic, copy) NSArray *firstOptionMessages;
@property(nonatomic) long long type; // @synthesize type;

@end

