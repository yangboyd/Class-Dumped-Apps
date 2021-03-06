//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppAndExtensionsFramework/GPBMessage.h>

@class CPBCallConnectionCandidateInfo, CPBCallPerfLogEntry_DataPoint_Connection_SignalStrength, GPBInt32Array;

@interface CPBCallPerfLogEntry_DataPoint_Connection : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long backendIntraBytesReceived; // @dynamic backendIntraBytesReceived;
@property(nonatomic) long long backendIntraBytesSent; // @dynamic backendIntraBytesSent;
@property(nonatomic) float backendIntraBytesSentPerPeerPerSecond; // @dynamic backendIntraBytesSentPerPeerPerSecond;
@property(nonatomic) long long backendIntraPacketsReceived; // @dynamic backendIntraPacketsReceived;
@property(nonatomic) long long backendIntraPacketsSent; // @dynamic backendIntraPacketsSent;
@property(nonatomic) float backendIntraPacketsSentPerPeerPerSecond; // @dynamic backendIntraPacketsSentPerPeerPerSecond;
@property(nonatomic) int bytesSecondReceived; // @dynamic bytesSecondReceived;
@property(nonatomic) int bytesSecondSent; // @dynamic bytesSecondSent;
@property(nonatomic) int connectionType; // @dynamic connectionType;
@property(nonatomic) int flags; // @dynamic flags;
@property(nonatomic) _Bool hasBackendIntraBytesReceived; // @dynamic hasBackendIntraBytesReceived;
@property(nonatomic) _Bool hasBackendIntraBytesSent; // @dynamic hasBackendIntraBytesSent;
@property(nonatomic) _Bool hasBackendIntraBytesSentPerPeerPerSecond; // @dynamic hasBackendIntraBytesSentPerPeerPerSecond;
@property(nonatomic) _Bool hasBackendIntraPacketsReceived; // @dynamic hasBackendIntraPacketsReceived;
@property(nonatomic) _Bool hasBackendIntraPacketsSent; // @dynamic hasBackendIntraPacketsSent;
@property(nonatomic) _Bool hasBackendIntraPacketsSentPerPeerPerSecond; // @dynamic hasBackendIntraPacketsSentPerPeerPerSecond;
@property(nonatomic) _Bool hasBytesSecondReceived; // @dynamic hasBytesSecondReceived;
@property(nonatomic) _Bool hasBytesSecondSent; // @dynamic hasBytesSecondSent;
@property(nonatomic) _Bool hasConnectionType; // @dynamic hasConnectionType;
@property(nonatomic) _Bool hasFlags; // @dynamic hasFlags;
@property(nonatomic) _Bool hasMergedSessionsBytesSecondReceived; // @dynamic hasMergedSessionsBytesSecondReceived;
@property(nonatomic) _Bool hasMergedSessionsBytesSecondSent; // @dynamic hasMergedSessionsBytesSecondSent;
@property(nonatomic) _Bool hasMergedSessionsRtt; // @dynamic hasMergedSessionsRtt;
@property(nonatomic) _Bool hasNetworkType; // @dynamic hasNetworkType;
@property(nonatomic) _Bool hasRemoteUserAddress; // @dynamic hasRemoteUserAddress;
@property(nonatomic) _Bool hasReportingUserAddress; // @dynamic hasReportingUserAddress;
@property(nonatomic) _Bool hasRtt; // @dynamic hasRtt;
@property(nonatomic) _Bool hasSignalStrength; // @dynamic hasSignalStrength;
@property(nonatomic) _Bool hasTotalBytesReceived; // @dynamic hasTotalBytesReceived;
@property(nonatomic) _Bool hasTotalBytesSent; // @dynamic hasTotalBytesSent;
@property(nonatomic) _Bool hasTotalPacketsDiscardedSent; // @dynamic hasTotalPacketsDiscardedSent;
@property(nonatomic) _Bool hasTotalPacketsSent; // @dynamic hasTotalPacketsSent;
@property(nonatomic) int mergedSessionsBytesSecondReceived; // @dynamic mergedSessionsBytesSecondReceived;
@property(nonatomic) int mergedSessionsBytesSecondSent; // @dynamic mergedSessionsBytesSecondSent;
@property(nonatomic) int mergedSessionsRtt; // @dynamic mergedSessionsRtt;
@property(nonatomic) int networkType; // @dynamic networkType;
@property(retain, nonatomic) CPBCallConnectionCandidateInfo *remoteUserAddress; // @dynamic remoteUserAddress;
@property(retain, nonatomic) CPBCallConnectionCandidateInfo *reportingUserAddress; // @dynamic reportingUserAddress;
@property(nonatomic) int rtt; // @dynamic rtt;
@property(retain, nonatomic) GPBInt32Array *rttSubintervalArray; // @dynamic rttSubintervalArray;
@property(readonly, nonatomic) unsigned long long rttSubintervalArray_Count; // @dynamic rttSubintervalArray_Count;
@property(retain, nonatomic) CPBCallPerfLogEntry_DataPoint_Connection_SignalStrength *signalStrength; // @dynamic signalStrength;
@property(nonatomic) long long totalBytesReceived; // @dynamic totalBytesReceived;
@property(nonatomic) long long totalBytesSent; // @dynamic totalBytesSent;
@property(nonatomic) int totalPacketsDiscardedSent; // @dynamic totalPacketsDiscardedSent;
@property(nonatomic) int totalPacketsSent; // @dynamic totalPacketsSent;

@end

