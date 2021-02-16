#pragma once

#include "../../src/RegressionLine.h"
#include "../../src/BitMatrixIO.h"
#include "../../src/ThresholdBinarizer.h"
#include "../../src/ByteArray.h"
#include "../../src/BitArray.h"
#include "../../src/GridSampler.h"
#include "../../src/Reader.h"
#include "../../src/ReedSolomonDecoder.h"
#include "../../src/ResultMetadata.h"
#include "../../src/Point.h"
#include "../../src/BinaryBitmap.h"
#include "../../src/ZXStrConvWorkaround.h"
#include "../../src/textcodec/KRHangulMapping.h"
#include "../../src/textcodec/GBTextDecoder.h"
#include "../../src/textcodec/JPTextDecoder.h"
#include "../../src/textcodec/KRTextDecoder.h"
#include "../../src/textcodec/Big5TextEncoder.h"
#include "../../src/textcodec/Big5TextDecoder.h"
#include "../../src/textcodec/JPTextEncoder.h"
#include "../../src/textcodec/KRTextEncoder.h"
#include "../../src/textcodec/Big5MapTable.h"
#include "../../src/textcodec/GBTextEncoder.h"
#include "../../src/MultiFormatWriter.h"
#include "../../src/CustomData.h"
#include "../../src/GenericGF.h"
#include "../../src/aztec/AZEncoder.h"
#include "../../src/aztec/AZToken.h"
#include "../../src/aztec/AZDetectorResult.h"
#include "../../src/aztec/AZHighLevelEncoder.h"
#include "../../src/aztec/AZWriter.h"
#include "../../src/aztec/AZEncodingState.h"
#include "../../src/aztec/AZDecoder.h"
#include "../../src/aztec/AZDetector.h"
#include "../../src/aztec/AZReader.h"
#include "../../src/Flags.h"
#include "../../src/ZXConfig.h"
#include "../../src/GTIN.h"
#include "../../src/Result.h"
#include "../../src/Matrix.h"
#include "../../src/BarcodeFormat.h"
#include "../../src/ConcentricFinder.h"
#include "../../src/ReadBarcode.h"
#include "../../src/CharacterSet.h"
#include "../../src/Pattern.h"
#include "../../src/TextEncoder.h"
#include "../../src/BitMatrixCursor.h"
#include "../../src/qrcode/QRMaskUtil.h"
#include "../../src/qrcode/QRDecoderMetadata.h"
#include "../../src/qrcode/QRDataMask.h"
#include "../../src/qrcode/QRReader.h"
#include "../../src/qrcode/QRBitMatrixParser.h"
#include "../../src/qrcode/QREncodeResult.h"
#include "../../src/qrcode/QRMatrixUtil.h"
#include "../../src/qrcode/QRDataBlock.h"
#include "../../src/qrcode/QREncoder.h"
#include "../../src/qrcode/QRWriter.h"
#include "../../src/qrcode/QRDecoder.h"
#include "../../src/qrcode/QRECB.h"
#include "../../src/qrcode/QRDetector.h"
#include "../../src/qrcode/QRCodecMode.h"
#include "../../src/qrcode/QRErrorCorrectionLevel.h"
#include "../../src/qrcode/QRVersion.h"
#include "../../src/qrcode/QRFormatInformation.h"
#include "../../src/DetectorResult.h"
#include "../../src/DecodeHints.h"
#include "../../src/DecodeStatus.h"
#include "../../src/ByteMatrix.h"
#include "../../src/TextDecoder.h"
#include "../../src/LogMatrix.h"
#include "../../src/BitMatrix.h"
#include "../../src/GenericLuminanceSource.h"
#include "../../src/pdf417/PDFScanningDecoder.h"
#include "../../src/pdf417/PDFBarcodeMetadata.h"
#include "../../src/pdf417/PDFBarcodeValue.h"
#include "../../src/pdf417/PDFDecoderResultExtra.h"
#include "../../src/pdf417/PDFDecodedBitStreamParser.h"
#include "../../src/pdf417/PDFCodeword.h"
#include "../../src/pdf417/PDFReader.h"
#include "../../src/pdf417/PDFEncoder.h"
#include "../../src/pdf417/PDFCompaction.h"
#include "../../src/pdf417/PDFDetectionResult.h"
#include "../../src/pdf417/PDFCodewordDecoder.h"
#include "../../src/pdf417/PDFHighLevelEncoder.h"
#include "../../src/pdf417/PDFModulusPoly.h"
#include "../../src/pdf417/PDFBoundingBox.h"
#include "../../src/pdf417/PDFWriter.h"
#include "../../src/pdf417/PDFModulusGF.h"
#include "../../src/pdf417/PDFDetectionResultColumn.h"
#include "../../src/pdf417/PDFDetector.h"
#include "../../src/ZXBigInteger.h"
#include "../../src/BitHacks.h"
#include "../../src/BitSource.h"
#include "../../src/LuminanceSource.h"
#include "../../src/datamatrix/DMSymbolInfo.h"
#include "../../src/datamatrix/DMReader.h"
#include "../../src/datamatrix/DMECEncoder.h"
#include "../../src/datamatrix/DMDetector.h"
#include "../../src/datamatrix/DMEncoderContext.h"
#include "../../src/datamatrix/DMSymbolShape.h"
#include "../../src/datamatrix/DMDataBlock.h"
#include "../../src/datamatrix/DMDecoder.h"
#include "../../src/datamatrix/DMVersion.h"
#include "../../src/datamatrix/DMBitLayout.h"
#include "../../src/datamatrix/DMHighLevelEncoder.h"
#include "../../src/datamatrix/DMWriter.h"
#include "../../src/TextUtfEncoding.h"
#include "../../src/maxicode/MCReader.h"
#include "../../src/maxicode/MCBitMatrixParser.h"
#include "../../src/maxicode/MCDecoder.h"
#include "../../src/WhiteRectDetector.h"
#include "../../src/oned/ODCode128Writer.h"
#include "../../src/oned/ODUPCAWriter.h"
#include "../../src/oned/ODCode128Patterns.h"
#include "../../src/oned/ODMultiUPCEANReader.h"
#include "../../src/oned/ODCode93Reader.h"
#include "../../src/oned/ODDataBarExpandedReader.h"
#include "../../src/oned/ODDataBarCommon.h"
#include "../../src/oned/ODEAN8Writer.h"
#include "../../src/oned/ODITFReader.h"
#include "../../src/oned/ODCode39Reader.h"
#include "../../src/oned/ODReader.h"
#include "../../src/oned/ODWriterHelper.h"
#include "../../src/oned/rss/ODRSSFieldParser.h"
#include "../../src/oned/rss/ODRSSGenericAppIdDecoder.h"
#include "../../src/oned/rss/ODRSSExpandedBinaryDecoder.h"
#include "../../src/oned/ODCodabarReader.h"
#include "../../src/oned/ODITFWriter.h"
#include "../../src/oned/ODDataBarReader.h"
#include "../../src/oned/ODCode128Reader.h"
#include "../../src/oned/ODEAN13Writer.h"
#include "../../src/oned/ODCode93Writer.h"
#include "../../src/oned/ODRowReader.h"
#include "../../src/oned/ODUPCEWriter.h"
#include "../../src/oned/ODCodabarWriter.h"
#include "../../src/oned/ODUPCEANCommon.h"
#include "../../src/oned/ODCode39Writer.h"
#include "../../src/DecoderResult.h"
#include "../../src/ZXNullable.h"
#include "../../src/Quadrilateral.h"
#include "../../src/ZXTestSupport.h"
#include "../../src/TritMatrix.h"
#include "../../src/Scope.h"
#include "../../src/ReedSolomonEncoder.h"
#include "../../src/GlobalHistogramBinarizer.h"
#include "../../src/CharacterSetECI.h"
#include "../../src/ZXContainerAlgorithms.h"
#include "../../src/MultiFormatReader.h"
#include "../../src/HybridBinarizer.h"
#include "../../src/GenericGFPoly.h"
#include "../../src/ResultPoint.h"
#include "../../src/PerspectiveTransform.h"
